#include "holberton.h"
#include <math.h>

/**
 *_sqtr_recursion -prints natural sqrt.
 *@n:integer to compute its sqtr.
 *
 *Return:sqrt of n.
 */
int _sqtr_recursion(int n)
{
return (pow(2, 0.5 * log2(n)));
}
