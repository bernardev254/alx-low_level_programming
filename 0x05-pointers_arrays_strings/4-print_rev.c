#include "holberton.h"

/**
*_print_rev - prints a string followed by a new line.
*@str:pointer
*
*return:void
*/

void print_rev(char *str)
{
while (str && *str)
{
_putchar(*str--);
}
_putchar('\n');
}
