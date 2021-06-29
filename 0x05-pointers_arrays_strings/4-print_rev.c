#include "holberton.h"
#include <stddef.h>

/**
*print_rev - prints a string followed by a new line.
*@str:pointer
*
*return:void
*/

void print_rev(char *str)
{
char *ptr;
for (*ptr = '\0'; *ptr = *str; *ptr--)
}
_putchar(*ptr);
}
