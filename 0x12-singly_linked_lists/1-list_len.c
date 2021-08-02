#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns no of elem of list_t list
 * @h: list_t list
 *
 * Return: elements of linked list_t list
 */

size_t list_len(const list_t *h)
{
	unsigned long int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

