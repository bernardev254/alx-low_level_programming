#include "holberton.h"
/**
*_isdigit - a function that checks for digits.
*@c:charcter to be checked.
*
*return: 1 if digit 0 otherwise
*/
int _isdigit(int c)
{
int i;
for (i = 0; i <= 9; i++)
{
if (c == i)
{
return (1);
}
else
{
return (0);
}
}
}
