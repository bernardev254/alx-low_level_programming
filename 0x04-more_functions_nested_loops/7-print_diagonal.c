#include "holbeton.h"

/**
 * print_diagonal - prints a diagonal
 * @n:diagonal size
 *
 * Return: void
 */

void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_puchar('\n');
}
else
{
for (1 = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (j == i)
{
_putchar('\\');
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
}
}
