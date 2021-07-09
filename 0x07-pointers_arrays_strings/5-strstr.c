#include "holberton.h"
/**
 *_strstr - locates a substring
 *@haystack:pointer to mem location
 *@needle:pointer to string
 *
 *Return:pointer to the beginning of a substring
 */

char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *s = haystack;
char *t = needle;
while (*haystack && *t && (*haystack = *t))
{
haystack++;
t++;
}
if (!*t)
{
return (s);
}
haystack = s + 1;
}
return ('\0');
}
