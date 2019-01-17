#include "board.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>


static BWTimeValue currentTime = {0, 0};

void BWGetCurrTimeMonotonic(BWTimeValue *pTime)
{
  *pTime = currentTime;
}


// For nanosecond to second
#define ONE_BILLION   1000000000

// Make sure nsec is never >= 1 second
static void ResolveSecWithNanoSec(BWTimeValue *pTime)
{
  if (pTime->ns >= ONE_BILLION) {
    do { 
      ++pTime->sec;
      pTime->ns -= ONE_BILLION;
    } while (pTime->ns >= ONE_BILLION);
  }
}

long BWMathDivRoundClosestInt(long dividend, long divisor)
{
  return DIV_ROUND_CLOSEST(dividend, divisor);
}

void BWTimeValueSetMS(BWTimeValue *pTime, BWTimeMS ms)
{
  pTime->sec = ms/1000;
  pTime->ns = (ms%1000)*1000000;
  ResolveSecWithNanoSec(pTime);
}

void BWTimeValueSet(BWTimeValue *pTime, bwtimeSec sec, bwtimeNs nsec)
{
  pTime->sec = sec;
  pTime->ns = nsec;
  ResolveSecWithNanoSec(pTime);
}

BWTimeMS BWTimeValueConvertToMS(const BWTimeValue *pTime)
{ 
  return (pTime->sec*1000)
           + BWMathDivRoundClosestInt(pTime->ns, 1000000);
}


static void BWTimestampCallback()
{
   //time_t now;
   //now = time(NULL); 
   struct timespec local;
   gettimeofday(&local, NULL);
  //gettimeofday(&time, NULL);
   BWTimeValue currentTimeNow;
   currentTimeNow.ns = 0;
   currentTimeNow.ns = local.tv_nsec;
  // printf("%d\n", local->tm_sec);
   //currentTimeNow.ns = local->tm_sec*1000000000;
   currentTimeNow.sec = 0;
   
  // printf("ns = %ld\n", currentTimeNow.ns);
  // BWTimeValueSet(&currentTimeNow, currentTimeNow.sec, currentTimeNow.ns); // Add 1ms
   BWTimeValueSet(&currentTime, currentTimeNow.sec, currentTimeNow.ns + 1000000);
}


long currentTimeMillis() {
  
  struct timeval time;
   //time_t now;
   //now = time(NULL); 
  // struct tm *local = localtime(&now);
  gettimeofday(&time, NULL);
  // BWTimeValue currentTime;
  // currentTime.ns = local->tm_sec * 1000000000;
  // printf("%d", currentTime.sec);
  // printf("Current second = %d\n", time.tv_sec);
   //printf("Current usec = %d\n", time.tv_usec);
   return time.tv_sec * 1000 + time.tv_usec / 1000;
  // BWTimestampCallback();
   //return currentTime.sec;
}

BWTimestamp BWGetCurrTimestamp(void)
{
  BWTimeValue timestamp;
  //currentTimeMillis();
  BWTimestampCallback();
  BWGetCurrTimeMonotonic(&timestamp);
  return BWTimeValueConvertToMS(&timestamp);
}

//int main(void)
//{
//	BWTimestamp currTimestamp = BWGetCurrTimestamp();
//	printf("%d\n", currTimestamp);
//}
//int main(void)
//{
//    clock_t stop;
// 
// 
//    getchar();
// 
//    stop = clock();
// 
//    printf("Approx seconds, tenths, hundredths and milliseconds: %.3f\n", 
//        (double)((double)stop / CLOCKS_PER_SEC));
// 
//    printf("Approx milliseconds: %.0f\n",
//        (double)((double)stop / CLOCKS_PER_SEC) * 1000);
// 
//    return 0;
//}

int main() {
	
	uint8_t one_second = 0;
	uint8_t ten_second = 0;
	while(1)
 	{
       BWTimestamp currTimestamp = currentTimeMillis();
       
      // printf("currTimestamp = %d\n", currTimestamp);
       
       #define EVERY_ONE_SECOND   (1000)
       static volatile BWTimestamp everyOneSecond = 0;
       if((currTimestamp - everyOneSecond) > EVERY_ONE_SECOND)
       {
       	  everyOneSecond = currTimestamp;
       	  one_second += 1;
          printf("every 1 second = %d\n", one_second);
          printf("currTimestamp = %d\n", currTimestamp);
       
       }
       
       #define VERYSLOW   (10 * 1000)
       static volatile BWTimestamp verySlowPollLastPolledMS = 0;
       if((currTimestamp - verySlowPollLastPolledMS) > VERYSLOW)
       {
       	  ten_second += 1;
       	  verySlowPollLastPolledMS = currTimestamp;
          
          printf("every 10 second = %d\n", ten_second);
          printf("Every 10 second = %d\n", verySlowPollLastPolledMS);
       }
	}
 
 }
