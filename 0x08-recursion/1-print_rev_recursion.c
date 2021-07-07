#include "holberton.h"
/**
 *_print_rev_recursion -prints a string in reverse.
 *@s:pointer to string.
 *
 *Return:void
 */

void _print_rev_recursion(char *s)
{
char *a = s;
*a = '\0';
if (*a != *s)
{
_putchar(*a);
a--;
_print_rev_recursion(a);
}
else
{
_putchar('\n');
}
}
