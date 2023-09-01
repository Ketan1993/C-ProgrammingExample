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

#ifdef DELETE_CHAR

char* delete_char_in_string(char *str, char pos)
{
    if(str == NULL)
    {
        return 0;
    }

    int len = strlen((const char*)str);
    char *s = str;
    char *p, *r;
    s = s + pos;
    p = s + 1;
    r = s;
    while(*r)
    {
        *r++ = *p++;
    }
    s--;
    s[len] = '\0';
    return str;
}

#endif //DELETE_CHAR