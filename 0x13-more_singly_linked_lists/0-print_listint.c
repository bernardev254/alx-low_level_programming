#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints elem of listint_t list
 * @h: listint_t list
 *
 * Return: no of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned long int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

