#include "holberton.h"

/**
 * print_diagonal - prints a diagonal
 * @n:diagonal size
 *
 * Return: void
 */

void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
_putchar('\\');
_putchar('\n');
for (i = 0; i < n; i++)
{
for (j = 0; j <= n; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
_putchar('\n');
}
