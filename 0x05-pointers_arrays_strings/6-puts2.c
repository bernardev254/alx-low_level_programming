#include "holberton.h"

/**
 *puts2 - returns alternate characters of a string
 *@s: pointer
 *
 *Return:void
 */

void puts2(char *s)
{
while (*s != '\0')
{
_putchar(*s);
s++;
s++;
}
}
