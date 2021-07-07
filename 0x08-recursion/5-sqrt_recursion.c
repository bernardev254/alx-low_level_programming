#include "holberton.h"

/**
 *sqtr_recursion -prints natural sqrt.
 *@n:integer to compute its sqtr.
 *
 *Return:sqrt of n.
 */

int sqtr_recursion(int n)
{
if (n == 0)
return (1);
else if (n < 0)
return (-1);
{
return (n * factorial(n - 1));
}
}
