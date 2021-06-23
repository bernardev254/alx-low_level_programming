#include "holberton.h"
/**
*times_table - prints times table for n.
*
*Return: void.
*/
void print_times_table(int n)
{
int i, j, product, last, first;
if ((n <= 15) && (n >= 0))
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
product = (i * j);
last = ((i * j) % 10);
first = ((i * j) / 10);
if (j == 0)
{
_putchar(product + '0');
}
else if (product < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(product);
}
else if (product > 10)
{

_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(first + '0');
_putchar(last + '0');
}
}
_putchar('\n');
}
}
}

