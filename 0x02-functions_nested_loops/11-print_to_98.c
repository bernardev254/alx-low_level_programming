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
putchar(i);
putchar('\n');
while (i !== 98)
{
putchar(',');
} 
}
else if (i == 98)
{
putchar(i);
}
else
{
for (i = i; i >= 98; i--)
{
putchar(i);
putchar('\n');
while (i !== 98)
{
putchar(',');
}
}
}
}

