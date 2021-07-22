#include <stdio.h>
#include "function_pointers.h"

 /**
  * array_iterator - take elems of an array as parameters
  * @array: pointer to array
  * @size: size of the array
  * @action: function pointer
  * Return: void
  */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned long int i = 0;

	if (!array || !action)
		return;
	for (; i < size; i++)
		action(array[i]);
}

