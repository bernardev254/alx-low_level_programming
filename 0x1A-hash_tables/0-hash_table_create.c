#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to created hash table on success otherwise NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (size == 0)
	{
		return (NULL);
	}

	new = malloc(sizeof(new));
	if (!new)
	{
		return (NULL);
	}
	new->size = size;
	new->array = calloc((size_t)new->size, sizeof(hash_node_t));
	if (!new->array)
	{
		return (NULL);
	}

	return (new);
}

