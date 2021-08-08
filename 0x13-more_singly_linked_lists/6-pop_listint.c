#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes first node
 * @head: pointer to pointer to list
 *
 * Return: heads data n
 */
int pop_listint(listint_t **head)
{
	listint_t ptr;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;

	return (num);
}

