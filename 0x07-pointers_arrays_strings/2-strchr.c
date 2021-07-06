#include "holberton.h"
/**
 *_strchr - locates a character in a string
 *@s:pointer to the string
 *@c:charcter to be located
 *
 *Return:pointer
 */

char *_strchr(char *s, char c)
{
char *ptr = s;
while (*ptr != '\0')
if (*ptr == c)
return ((char *)s);
return (NULL);
}

