#include "holberton.h"
/**
*jack_bauer -  that prints every minute of the day
*
*Returns - void to whoever called the function.
*/
void jack_bauer(void)
{
char a, b, c, d;
{
for (a = '0'; a <= '2'; a++)
{
for (b = '0'; b <= '3'; b++)
{
for (c = '0'; c <= '5'; c++)
{
for (d = '0'; d <= '9'; d++)
{
_putchar(a);
_putchar(b);
_putchar(':');
_putchar(c);
_putchar(d);
if ((a = '2') && (b = '4') && (c = '5') && (d = '9'))
{
}
else
{
_putchar('\n');
}
}
}
}
}
}
}

