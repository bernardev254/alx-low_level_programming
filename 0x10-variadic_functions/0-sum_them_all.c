#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums the arguments
 * @n: unsigned int
 *
 * Return: sum of it's parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i;

	va_start(ap, n);
	
	if (n == 0)
		return (0);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}


