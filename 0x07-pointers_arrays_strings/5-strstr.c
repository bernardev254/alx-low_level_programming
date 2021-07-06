#include "holberton.h"
/**
 *_strstr - scans a string and returns the address
 *@s:pointer to mem location
 *@accept:pointer to string
 *
 *Return:no of bytes from the source substring
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
if (! *t)
{
return (s);
}
haystack = s + 1;
} 
return ('\0');
}
