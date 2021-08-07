#include "main.h"

/**
 * set_bit - git the value of indexed bit
 * @n: pointer to hecimal to us it's binary bits
 * @index: the position
 *
 * Return: 1 on success, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

