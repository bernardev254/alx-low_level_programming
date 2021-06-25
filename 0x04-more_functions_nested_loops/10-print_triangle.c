#include "holberton.h"
/**
*print_triangle - prints a triangle.
*@size: triangle length
*Return:void.
*/
void print_triangle(int size)
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = i; j < size; j++)
{
_putchar(' ');
}
for (j = 1; j <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
