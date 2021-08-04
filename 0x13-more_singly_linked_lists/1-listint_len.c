#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns no of elem of listint_t list
 * @h: listint_t list
 *
 * Return: elements of linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	unsigned long int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

