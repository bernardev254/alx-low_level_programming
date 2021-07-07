#include "holberton.h"
/**
 *print_rev_recursion -prints a string in reverse.
 *@s:pointer to string.
 *
 *Return:void
 */

void print_rev_recursion(char *s)
{
char *a = s;
*a = '\0';
if (*a != *s)
{
_putchar(*s);
a--;
print_rev_recursion(s);
}
else
{
_putchar('\n');
}
}
