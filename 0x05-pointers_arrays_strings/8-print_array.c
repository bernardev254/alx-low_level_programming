#include "holberton.h"
 /**
 *print_array - prints an array.
 *@a:pointer to the array.
 *
 *Return:void
 */

void print_array(int *a, int n)
{
int i;
_putchar(a[0]);
for (i = 1; i < n; i++)
{
_putchar(',');
_putchar(' ');
_putchar(*(a + i));
}
}
