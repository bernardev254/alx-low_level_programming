#include "holberton.h"

/**
 * main - prints argv[0]
 * @argc: arguments count
 *@argv:arguments vector
 *
 * Return: On success 1.
 */
int main(int argc, char **argv)
{
char *s = argv;
while (*s != '\0' && argc > 0)
{
_putchar(*s);
s++;
}
_putchar('\n');
return (1);
}
