#include "holberton.h"

/**
*print_rev - prints a string followed by a new line.
*@s:pointer
*
*return:void
*/

void print_rev(char *s)
{
char *ptr = s;
  char c;
while (*ptr <= '\0')
ptr++;
for ( ; *ptr >= *s; ptr--)
{
  c = (*ptr);
_putchar(c);
}
}
