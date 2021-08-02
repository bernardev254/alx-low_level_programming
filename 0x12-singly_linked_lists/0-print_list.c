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
	const list_t *ptr;

	ptr = NULL;
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		if (ptr->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
	}
	return (count);
}

