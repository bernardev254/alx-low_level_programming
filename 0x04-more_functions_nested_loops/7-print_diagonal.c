#include "holberton.h"
/**
*print_diagonal - prints a diagonal.
*@n: diagonal  length dimension
*Return:void.
*/
void print_diagonal(int n)
{
if (n > 0)
{
_putchar('\\');
_putchar('\n');
int i;
for (i = 1; i < n; i++)
{
int j;
for (j = 0; j <= i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
_putchar('\n');
}
