#include "holberton.h"
/**
 *_strlen_recursion -prints a string in reverse.
 *@s:pointer to string.
 *
 *Return:void
 */

int _strlen_recursion(char *s)
{
int n = 0;
if (*s != '\0')
{
s++;
n++;
return (n);
_strlen_recursion(s);
}
return (n);
}
