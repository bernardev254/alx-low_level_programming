#include "holberton.h"
/**
 *_strspn - returns character after accept
 *@s:pointer to mem location
 *@accept:characters 
 *
 *Return:string
 */

unsigned int _strspn(char *s, char *accept)
{
if (accept[0] == '\n')
return (0);
char *ptr = s;
for (; *s == accept; s++)
return (s - ptr);
}
