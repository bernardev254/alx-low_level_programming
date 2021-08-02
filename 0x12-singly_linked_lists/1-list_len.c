#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elem of list_t list
 * @h: list_t list
 *
 * Return: no of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned long int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

