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
	int no;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	no = ((max + 1) - min);
	arr = malloc(sizeof(int) * no);
	if (arr == NULL)
	{
		return (NULL);
	}
	return (arr);
}

