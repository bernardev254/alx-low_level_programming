#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in the listint_t
 * linked list at index
 * @head: pointer to list
 * @index: index
 *
 * Return: 1 on success,-1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		rturn(1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
		return (-1);

		temp = temp->next;
		i++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}

