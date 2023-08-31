#include "string.h"

#ifdef __STRING_CPY

char *__string_cpy(char *dest, const char *src)
{
    if (src == NULL)
    {
        return 0;
    }
    char *d = dest;
    const char *s = src;
    while ((*d++ = *s++));
    return dest;
}

#endif //__STRING_CPY