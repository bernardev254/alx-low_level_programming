#include "holberton.h"

/**
*rev_string - prints a string  in reverse followed by a new line.
*@s:pointer
*
*return:void
*/

void rev_string(char *s)
{
int len, i, n;
char c;
len = 0;
while (*s != 0)
{
len++;
s++;
}
s = s - len;
n = len - 1;
for (i = 0; i < len / 2; i++)
{
c = *(s + i);
*(s + i) = *(s + n);
*(s + n) = c;
}
}
