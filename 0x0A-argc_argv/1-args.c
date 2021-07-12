#include <stdlib.h>
#include <stdio.h>
#define UNUSED(**argv) void(**argv)

/**
 * main - prints the number of arguments passed to it.
 * @argc: arguments count
 *@argv:arguments vector
 *
 * Return: On success 0.
 */
int main(int argc, char **argv)
{
UNUSED(**argv);
printf("%d\n", argc);
return (0);
}
