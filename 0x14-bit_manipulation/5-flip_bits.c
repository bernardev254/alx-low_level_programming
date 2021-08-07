#include "main.h"

/**
 * flip_bits - returns the no of bits to
 * flip to get to another number
 * @n: hecimal to us it's binary bits
 * @m: the oher number
 *
 * Return: number to bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int new;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		new = ex >> i;
		if (new & 1)
			count++;
	}

	return (count);
}

