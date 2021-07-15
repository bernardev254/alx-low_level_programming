#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 *malloc_checked - allocates mem dynamically.
 *@b:size of mem.
 *
 *Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

