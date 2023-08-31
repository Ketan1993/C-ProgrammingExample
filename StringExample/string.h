#ifndef STRING___H_INCL
#define STRING___H_INCL
#include <stdlib.h>

#define __STRING_CPY
    
    //string copy function
    //pass source point
    //pass dest   point
    //return dest on sucess, or NULL if source is null
    char *__string_cpy(char *dest, const char *src);

#endif // STRING___H_INCL