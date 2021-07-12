#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints argv[0]
 * @argc: arguments count
 *@argv:arguments vector
 *
 * Return: void.
 */
void main(int argc, char **argv)
{
if (argc > 0)
printf("%s\n", argv[0]);
}
