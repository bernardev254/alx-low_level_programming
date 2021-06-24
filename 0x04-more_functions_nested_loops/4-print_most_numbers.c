#include "holberton.h"
/**
 *print_most_numbers - prints natural numbers with excluding 2 & 4.
 *
 *return:void
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if ((i != 2) || (i != 4))
{
_putchar(i);
}
_putchar('\n');
}
}
