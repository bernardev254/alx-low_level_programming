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
int a;
if (!(*s) || !(*accept))
{
return (n);
}
while (*s)
{
for (a = 0; accept[a] != '\0'; a++)
{
if (accept[a] == *s++)
{
n++;
break;
}
else if (accept[a + 1] == '\n')
return (n);
}
s++;
}
return (n);
}
