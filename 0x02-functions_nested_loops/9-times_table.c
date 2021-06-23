#include "holberton.h"
/**
*times_table - prints times table.
*
*Return: void.
*/
void times_table(void)
{
int j, i;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (j == 0)
{
_putchar('0');
}
else if ((i * j) < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((i * j) + '0');
}
else
{

_putchar(',');
_putchar(' ');
_putchar(((i * j) / 10) + '0');
_putchar(((i * j) % 10) + '0');
}
}
}
_putchar('\n');
}
  
