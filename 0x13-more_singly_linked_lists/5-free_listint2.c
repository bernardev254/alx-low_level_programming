#include <stdlib.h>
#include "lists.h"
/**
 *free_listint2 - frees listint_t
 *@head:pointer to first node
 *
 *Return:void
 */
void free_listint2(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		hesd = ptr;
	}
}
