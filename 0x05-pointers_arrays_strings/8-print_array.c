#include "holberton.h"
 /**
 *print_array - prints an array.
 *@a:pointer to the array.
 *@n: number of elements of the array
 *
 *Return:void
 */

void print_array(int *a, int n)
{
int i;
printf("%d",a[0]);
for (i = 1; i < n; i++)
{
printf(", %d",a[i]);
}
}
