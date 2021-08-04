#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the
 * begining of the listint_t list
 * @head: pointer to pointer to list
 * @n:integer
 *
 * Return: address to the new elem or null if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first;
	unsigned int len = 0;

	first = (listint_t *)malloc(sizeof(listint_t));
	if (!first)
		return (NULL);

	first->n = n;
	first->next = (*head);
	(*head) = first;

	return (first);
}

