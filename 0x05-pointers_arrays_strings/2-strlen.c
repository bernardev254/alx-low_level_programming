#include "holberton.h"

/**
 *_strlen - returns the length of a string
 *@s: pointer
 *
 *Return:length of a string.
 */

int _strlen(char *s)
{
char *ptr;
  long int *longword, longword;
int length;
for (ptr = s; ((long int) ptr & (sizeof (longword) - 1)) != 0; ++ptr)
{
if (*ptr == '\0')
length = (ptr - s);
}
return (length);
}
