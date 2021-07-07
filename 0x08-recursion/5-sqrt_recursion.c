#include "holberton.h"

/**
 *_sqtr_recursion -prints natural sqrt.
 *@n:integer to compute its sqtr.
 *
 *Return:sqrt of n.
 */

int _sqtr_recursion(int n)
{
/**_pow_recursion - returns power.
*@x:base
*@y:exponent
*
*Return:int
*/
int _pow_recursion(int x, int y)
{
if (y <= 0) /* base condition */
if (y < 0)
return (-1);
return (1);
}
else if (y % 2 != 0)
return (x * _pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
else
return (_pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
}
{
return (_pow(2, 0.5 * log2(n));
}
