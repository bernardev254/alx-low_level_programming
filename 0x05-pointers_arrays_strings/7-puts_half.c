#include "holberton.h"
#include <string.h>

/**
*puts_half - prints half a string
*@str:pointer param.
*
*Return:void.
*/

void puts_half(char *str)
{
int length, n, i;
length = strlen(str);
n = length / 2;
  
for (i = (n + 1); i < length; i++)
{
_putchar(*(str + i));
}
_putchar('\n');
}
