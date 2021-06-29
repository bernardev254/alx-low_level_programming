#include "holberton.h"

/**
 *puts2 - returns the length of a string
 *@s: pointer
 *
 *Return:alternate characters of a string.
 */

void puts2(char *s)
{
int length = 0;
while (*s != '\0')
{
s++;
if ((length % 2) == 0)
_putchar(*s);
length++;
}
_putchar('\n');
}
