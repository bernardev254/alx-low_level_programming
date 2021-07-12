#include "holberton.h"

/**
 * main - prints all arguments it receives
 * @argc: arguments count
 *@argv:arguments vector
 *
 * Return: On success 0.
 */
void main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
{
_putchar(argv[i]);
_putchar('\n');
}
}
