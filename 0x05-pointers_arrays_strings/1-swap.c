#include "holberton.h"

/**
 *swap_int - swaps the value of two integers'
 *@a: pointer to first integer.
 *@b:pointer to 2nd integer.
 *
 *Return:void.
 */

void swap_int(int *a, int *b)
{
int z = *a;
*a = *b;
*b = z;
}
