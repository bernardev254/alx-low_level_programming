#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums the arguments
 * @n: unsigned int
 *
 * Return: sum of it's parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}


