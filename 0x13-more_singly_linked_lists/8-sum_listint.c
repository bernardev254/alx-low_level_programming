#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - sums n in list
 * @head: pointer to list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

