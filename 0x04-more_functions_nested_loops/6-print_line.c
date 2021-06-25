#include "holberton.h"
/**
 *print_line - prints a line
 *@n:length of the line
 *return:void
 */
void print_line(int n)
{
if (n > 0)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('-');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
