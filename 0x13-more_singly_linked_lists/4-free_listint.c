#include <stdlib.h>
#include "lists.h"
/**
 *free_listnt - frees listint_t
 *@head:pointer to first node
 *
 *Return:void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
