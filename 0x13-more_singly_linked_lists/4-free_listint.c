#include <stdlib.h>
#include "lists.h"
/**
 *free_listint - frees listint_t
 *@head:pointer to first node
 *
 *Return:void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
