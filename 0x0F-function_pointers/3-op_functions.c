#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * op_add - returns addition of two ints
 * @a: int
 * @b: int
 *
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns sub of two ints
 * @a: int
 * @b: int
 *
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns mul of  ints
 * @a: int
 * @b: int
 *
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns div of an int.
 * @a: int
 * @b: int
 *
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns mod of an int.
 * @a: int
 * @b: int
 *
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

