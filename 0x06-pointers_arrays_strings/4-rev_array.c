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
int i, j;
int tmp;
for (i = 0; n = n - 1; i < j; i++, j--)
{
tmp = *(a + i);
*(a + i) = *(a + j);
*(a + j) = tmp;
}
}
