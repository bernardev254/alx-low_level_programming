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
int length;
if (s = "")
{
length = 0;
}
else
{
for (ptr = s; *ptr; ++ptr)
{
length = ((ptr - s) + 1);
}
}
return (length);
_putchar('\n');
}
