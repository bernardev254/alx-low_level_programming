#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - selects the operator.
 * @s: operator.
 * @
 *
 * Return: int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
				break;

		i++;
	}
	return (ops[i].f);
}

