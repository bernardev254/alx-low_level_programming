#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the
 * begining of the list_t list
 * @head: pointer to pointer to list
 * @str:string
 *
 * Return: address to the new elem or null if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t first;
	unsigned int len = 0;

	while (str[len])
		len++;

	first = malloc(sizeof(list_t));
	if (!first)
		return (NULL);

	first->str = strdup(str);
	first->len = len;
	first->next = (*head);
	(*head) = first;

	return (head);
}

