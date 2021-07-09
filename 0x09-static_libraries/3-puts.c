#include "holberton.h"

/**
*_puts - prints a string followed by a new line.
*@str:pointer
*
*return:void
*/

void _puts(char *str)
{
while (str && *str)
{
_putchar(*str++);
}
_putchar('\n');
}
