#include <stdio.h>
#include <stdint.h>

typedef int32_t bwtimeSec;
typedef int32_t bwtimeNs;  
typedef int32_t BWTimeMS;

typedef uint32_t BWTimestamp;

BWTimestamp BWGetCurrTimestamp(void);



typedef struct {
	bwtimeSec sec;
	bwtimeNs ns;
}BWTimeValue;

void BWGetCurrTimeMonotonic(BWTimeValue *pTime);
BWTimeMS BWTimeValueConvertToMS(const BWTimeValue *pTime);

#define DIV_ROUND_CLOSEST(dividend, divisor)  \
          ((((dividend) < 0) ^ ((divisor) < 0)) ? \
            (((dividend) - ((divisor)/2)) / (divisor)) : \
            (((dividend) + ((divisor)/2)) / (divisor)))
long BWMathDivRoundClosestInt(long dividend, long divisor);

