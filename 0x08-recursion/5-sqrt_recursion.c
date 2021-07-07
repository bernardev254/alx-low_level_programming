#include "holberton.h"
int _sqrt_recursion(int n);
/**
*func - returns sqrt
*@root:int
*@square:int
*
*Return:int
*/
int func(int root, int square)
{
if (root * root == square)
return (root);
if (root > square)
return (-1);
return (func(root + 1, square));
}

/**
 *_sqtr_recursion -prints natural sqrt.
 *@n:integer to compute its sqtr.
 *
 *Return:sqrt of n.
 */
int _sqrt_recursion(int n)
{
return (func(0, n));
}
