#include "holberton.h"
#include <stdio.h>
/**
*print_to_98 -  prints all natural numbers from n to 98, followed by a new line.
*@i:entered integer
*Return : void.
*/
void print_to_98(int i)
{
if (i < 98)
{
for (i = i; i <= 98; i++)
printf("%d\n,", i);
}
else if (i = 98)
{
printf ("%d\n", i);
}
else
{
for (i = i; i >= 98; i--)
{
while (i !== 98)
printf("%d", i);
}
}
}
