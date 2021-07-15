#include <stdlib.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *_calloc - allocate memory for an array.
 *@nmemb: no of elements.
 *@size: size of the elements in bytes.
 *
 *Return: pointer to alocated array.
 */

void *_calloc(unsigned int nmemb, int size)
{
	int *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr ==  NULL)
	{
		return (NULL);
	}
	return (arr);
}
