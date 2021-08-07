#include <stdio.h>
#include"main.h"

/**
 * print_binary - print base 2
 * @n:decimal to print it's binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i;
	int count = 0;
	unsigned long int new_n;

	for (i = 63; i >= 0; i--)
	{
		new_n = n >> i;

		if (new_n & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

