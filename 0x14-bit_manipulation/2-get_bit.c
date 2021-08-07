#include "main.h"

/**
 * get_bit - git the value of indexed bit
 * @n: decimal to us it's binary bits
 * @index: the position
 *
 * Return:value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}

