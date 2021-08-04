#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int main(void)
{
	listint_t *head;
	head = NULL;

	add_nodeint_end(&head, 1024);
	print_listint(head);
	free_listint(head);
	head = NULL;
	return (0);
}

