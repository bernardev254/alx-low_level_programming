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
if (length % 2 == 0)
{
n = length / 2;
}
else
{
n = (length + 1) / 2;  
}
for (i = n; i < length; i++)
{
_putchar(*(str + i));
}
_putchar('\n');
}
