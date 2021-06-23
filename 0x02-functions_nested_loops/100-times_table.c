#include "holberton.h"
/**
*times_table - prints times table for n.
*
*Return: void.
*/
void times_table(int n)
{
int n, m;
while ((n <= 15) && (n >= o))
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
product = (i * j);
last = ((i * j) % 10);
first = ((i * j) / 10);
if (product == 0)
{
_putchar('0');
}
else if (product < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(product + '0');
}
else
{

_putchar(',');
_putchar(' ');
_putchar(first + '0');
_putchar(last + '0');
}
}
_putchar('\n');
}
