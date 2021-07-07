#include "holberton.h"

/**
 *_puts_recursion -prints a string.
 *@s:pointer to string.
 *
 *Return:void
 */

void _puts_recursion(char *s)
{
if (*s++ != '\0')
{
_putchar(s[0]);
_puts_recursion(&(*s++));
}
_putchar('\n');
}

