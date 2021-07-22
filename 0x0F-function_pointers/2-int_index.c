#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an int.
 * @array: pointer to array
 * @size: size of array
 * @cmp: function for comparing
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp || size <= 0)
		return (-1);
	for (; i < size; i++)
		if (cmp(array[i]) > 0)
			return (i);
	return (-1);
}

