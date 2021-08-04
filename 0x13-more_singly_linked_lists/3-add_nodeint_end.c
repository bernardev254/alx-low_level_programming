#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the
 * end of the listint_t list
 * @head: pointer to pointer to list
 * @n: integer
 *
 * Return: address to the new elem or null if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;
	listint_t *temp = *head;

	last = malloc(sizeof(listint_t));
	if (!last)
		return (NULL);

	last->n = n;
	last->next = NULL;

	if (*head == NULL)
	{
		*head = last;
		return (last);
	}
	
	while (temp->next)
		temp = temp->next;

	temp->next = last;
	
	return (last);
}

