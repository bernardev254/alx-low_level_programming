#include "holberton.h"
/**
*times_table - prints times table.
*
*Return: void.
*/
void times_table(void)
{
int j, i;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if ((j <= (i - 1)) && (j != 0))
{
_putchar((i * j));
_putchar(',');
}
else
{
_putchar((i * j));
}
}
}
}
