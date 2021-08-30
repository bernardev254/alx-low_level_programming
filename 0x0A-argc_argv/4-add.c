#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - sum of arguments
 * @argc: no of argument
 * @argv:arguments vector.
 *
 *Return: on success 0,1 otherwise
 */

int main(int argc, char **argv)
{
	int i, j, k, num;
	int result = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
			if (num >= 0)
			{
				result += num;
			}
	}
	printf("%d\n", result);
	return (0);
}

