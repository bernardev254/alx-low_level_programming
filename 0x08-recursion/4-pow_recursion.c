#include "holberton.h"

/**
 *pow_recursion -prints x power y .
 *@x:integer to compute its factorial.
 *@y:integer
 *
 *Return:x power y.
 */

int pow_recursion(int x, int y)
{
if (y == 0) /* base condition */
return (1);
else if (y % 2 != 0)
return (x * pow_recursion(x, y/2) * pow_recursion(x, y/2));
else
return (pow_recursion(x, y/2) * pow_recursion(x, y/2));
}
