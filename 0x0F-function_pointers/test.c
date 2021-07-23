#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - operation program
 * @argc: no of arguments
 * @argv: arg array
 *
 * Return: zero.
 */
int main(int argc, char **argv)
{
	int a;
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", argc);
	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}

