#include "my_string.h"

#ifdef __STRING_CPY

char *__string_cpy(char *dest, const char *src)
{
    if (src == NULL)
    {
        return 0;
    }
    char *d = dest;
    const char *s = src;
    while ((*d++ = *s++))
        ;
    return dest;
}

#endif //__STRING_CPY

#ifdef DELETE_CHAR

char *delete_char_in_string(char *str, char pos)
{
    if (str == NULL)
    {
        return 0;
    }

    // get the length
    int len = strlen((const char *)str);
    char *s = str;
    char *p, *r;
    // jump to position
    s = s + pos;
    // jump current position + 1
    p = s + 1;
    // assign current position to pointer
    r = s;
    while (*r)
    {
        // do assign on every step untill null
        *r++ = *p++;
    }
    // delete one location
    s--;
    // terminate with null
    s[len] = '\0';
    return str;
}

#endif // DELETE_CHAR

#ifdef STRING_REVERSE

char *string_reverse(char *str)
{
    char *s = str;
    int len = strlen((const char *)str) - 1;
    char *end = s + len;
    // check up to last character
    while (s < end)
    {
        // take temp variable and initialize
        char temp = *s;
        *s = *end;
        *end = temp;

        s++;
        end--;
    }

    return str;
}

#endif // STRING_REVERSE

#ifdef STRING_LEN
int string_len(const char *s)
{
    int n = 0;
    while(*s++)n++;
    return n;
}

#endif // STRING_LEN