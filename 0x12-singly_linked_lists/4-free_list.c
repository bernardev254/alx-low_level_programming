#include <stdlib.h>
#include "lists.h"
/**
 *frees_list - frees list_t
 *@head:pointer to first node
 *
 *Return:void
 */
void free_list(list_t *head)
{
	list_t *ptr;
	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
