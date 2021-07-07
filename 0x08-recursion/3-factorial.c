#include "holberton.h"

/**
 *factorial -prints a string.
 *@n:integer to compute its factorial.
 *
 *Return:factorial if n.
 */

int factorial(int n)
{
if (n == 0)
return (1);
{
return (n * factorial(n - 1));
}
}
