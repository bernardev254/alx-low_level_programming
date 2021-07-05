#include "holberton.h"
/**
 *_memset - fills memory with a constant byte
 *@s:pointer to mem location
 *@b:character to fill
 *@n:number of n to fill
 *
 *Return:pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
  char *ptr = s;
  while (n-- > 0)
    *ptr++ = b;
  return (s);
}
