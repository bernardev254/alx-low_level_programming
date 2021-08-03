#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the
 * end of the list_t list
 * @head: pointer to pointer to list
 * @str:string
 *
 * Return: address to the new elem or null if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last, *temp;
	unsigned int len = 0;
        char *str2 = strdup(str);

	while (str[len])
		len++;

	last = malloc(sizeof(list_t));
	if (!last)
		return (free(last), NULL);

	last->str = str2;
	last->len = len;
	last->next = NULL;
	temp = (*head);
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = last;

	return (last);
}

