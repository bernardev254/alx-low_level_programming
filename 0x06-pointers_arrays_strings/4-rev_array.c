#include "holberton.h"

/**
 *reverse_array - reverses the content of the array.
 *@a:pointer to array'
 *@n:no of element of the array
 *
 *Return:void
 */
void reverse_array(int *a, int n)
{
int i;
for (i = (n - 1); i >= 0; i--)
{
_putchar(*(a + i));
}
_putchar('\n');
}
