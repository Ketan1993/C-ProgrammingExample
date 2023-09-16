#ifndef STRING___H_INCL
#define STRING___H_INCL
#include <stdlib.h>
#include <string.h>

// #define __STRING_CPY

// string copy function
// pass source point
// pass dest   point
// return dest on sucess, or NULL if source is null
char *__string_cpy(char *dest, const char *src);

// #define DELETE_CHAR
//  char delete function
//  this function is use to delete the specific character from given position
//  pass string as input
//  pas  position of character
char *delete_char_in_string(char *str, char pos);

#define STRING_REVERSE
// string reverse function
// pass string as an input
// pass valid string
char *string_reverse(char *str);

#endif // STRING___H_INCL
