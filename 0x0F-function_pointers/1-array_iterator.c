#include <stdio.h>
#include "function_pointers.h"
 /**
  * array_iterator - take elems of an array as parameters
  * @array: array
  * @size: size of the array
  * @action:pointer to a function
  *
  * Return: void
  */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	long unsigned int i = 0;

	for (; i < size; i++)
		action(array[i]);
}

