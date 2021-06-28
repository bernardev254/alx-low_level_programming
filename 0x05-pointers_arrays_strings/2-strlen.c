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
for (ptr = s; ptr != 0; ptr++)
if (ptr == '\0')
return (ptr - s);
}
