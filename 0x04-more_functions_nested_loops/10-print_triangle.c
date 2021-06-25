#include "holberton.h"
/**
*print_triangle - prints a triangle.
*@size: triangle length
*Return:void.
*/
void print_triangle(int size)
{
int i;
for (i = 0; i <= size; i++)
{
int j, k;
for (j = size - 1; j >= i; j--)
{
_putchar(' ');
}
for (k = 1; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
