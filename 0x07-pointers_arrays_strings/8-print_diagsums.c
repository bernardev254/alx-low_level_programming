#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums- prints the sum of two diagonals
 *@a:pointer
 *@size:size
 *
 *Return:void
 */

void *print_diagsums(int *a, int size)
{
int i, j, sum = 0;
for (i = 0; i < size;  i++)
{
sum = sum + *(a + i *size + i);
}
printf("%d", sum);
sum = 0;
for (j = 0; j < size; j++)
{
sum = sum + *(a + size *(j + 1) - (j + 1));
}
printf("%d\n", sum);
}
