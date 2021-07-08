#include "holberton.h"
/**
 *_strspn - gets the len of a prefix substring
 *@s:pointer to mem location
 *@accept:pointer to string
 *
 *Return:no of bytes from the source substring
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int a, b;
if (!(*s) || !(*accept))
{
return (n);
}
while (*s)
{
for (b = 0; accept[a] != '\0'; b++)
{
if (accept[b] == *s)
{
n++;
break;
}
else if (accept[b + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
