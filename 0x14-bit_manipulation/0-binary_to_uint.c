#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to integer
 * @b:string containing bits
 *
 * Return:the uint value on success,0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal = 2 * decimal + (b[i] - '0');
	}
	return (decimal);
}

