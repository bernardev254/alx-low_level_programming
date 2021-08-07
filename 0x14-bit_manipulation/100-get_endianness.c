#include "main.h"
/**
 * get_endianness - get the endianness
 *
 * Return: 1 if big endianness,0 if little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

