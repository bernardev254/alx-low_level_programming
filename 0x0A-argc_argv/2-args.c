#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: arguments count
 *@argv:arguments vector
 *
 * Return: On success 0.
 */
int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
{
printf("%c\n", argv[i]);
}
return (0);
}
