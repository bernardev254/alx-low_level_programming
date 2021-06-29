#include "holberton.h"

/**
*puts_half - prints half a string
*@str:pointer param.
*
*Return:void.
*/

void puts_half(char *str)
{
int length half;
length = _strlen(str);

if (length % 2 != 0)
{
for (half = (length + 1) / 2; half < length; half++)
{
_putchar(*(str + half));
}
for (half = (length / 2); half < length; half++)
{
_putchar(*(str + half));
}
}
_putchar('\n');
}
