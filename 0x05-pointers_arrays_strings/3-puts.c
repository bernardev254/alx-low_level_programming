#include "holberton.h"

/**
*void _puts(char *str)
*@str:pointer
*
*return:void
*/

void _puts(char *str)
{
while (str && *str)
{
_putchar(*str++);
_putchar('\n');
}
}
