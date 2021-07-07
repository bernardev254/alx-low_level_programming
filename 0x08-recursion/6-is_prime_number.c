#include "holberton.h"

/**
 *is_prime_number -returns whether prime.
 *@n:integer to determine whether is prime.
 *
 *Return:1 if prime 0 otherwise.
 */

int is_prime_number(int n)
{
int i = 2;
if (n <= 2)
return (n == 2);
if (n % i == 0)
return (0);
if (i * i > n)
return (1);
i++;
return (is_prime_number(n));
}
