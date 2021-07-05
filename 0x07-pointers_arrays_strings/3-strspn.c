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
if (accept[0] == '\n')
return (0);
char *ptr = s;
for (; *s == accept; s++)
return (s - ptr);
}
