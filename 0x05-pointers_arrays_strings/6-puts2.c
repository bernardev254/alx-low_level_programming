#include "holberton.h"

/**
 *puts2 - returns alternate characters of a string
 *@s: pointer
 *
 *Return:void
 */

void puts2(char *s)
{
int length = 0;
while (*s != '\0')
{
s++;
_putchar(*s);
s++;
}
}
