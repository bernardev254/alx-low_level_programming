#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *main - check
 *
 *Return: o.
 */

int main(void)
{
	char *concat;

	concat = string_nconcat("Holberton ", "school !!!", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}


