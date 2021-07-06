#include "holberton.h"
/**
 *_strpbrk - scans a string and returns the address
 *@s:pointer to mem location
 *@accept:pointer to string
 *
 *Return:no of bytes from the source substring
 */

char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i] != '\0';  i++)
{
if (*s == accept[i])
{
return (s);
}
}
s++;
}
return ('\0');
}
