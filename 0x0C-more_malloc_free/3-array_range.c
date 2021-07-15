#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 *array_range - creates an array of integers.
 *@min: least int .
 *@max: max int.
 *
 *Return: pointer to  array
 */

int *array_range(int min, int max)
{
	int no, i;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	no = ((max + 1) - min);
	arr = malloc(sizeof(arr) * no);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		*arr[i] = i;
	}
	return (arr);
}

