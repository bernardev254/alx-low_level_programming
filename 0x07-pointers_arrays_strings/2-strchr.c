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
int a;
for (a = 0;s[a] >= '\0';a++)
{
if (s[a] == c)
{
return (s + a);
}
}
return ('\0');
}

