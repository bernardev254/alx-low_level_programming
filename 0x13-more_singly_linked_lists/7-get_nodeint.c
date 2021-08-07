#include "lists.h"

/**
 * get_nodeint_at_index - returns node at index
 * specified
 * @head: pointer to list
 * @index: index
 *
 * Return: address to node indexed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = head;

	while (ptr && i < index)
	{
		ptr = ptr->next;
		i++;
	}

	return (ptr ? ptr : NULL);
}

