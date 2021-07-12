#include "holberton.h"

/**
 * main - writes the character c to stdout
 * @argc: arguments count
 *@argv:arguments vector 
 *
 * Return: On success 0.
 */
int main(int argc, char **argv)
{
int sum = 0;
char *s = "Error";
int i;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (!(argv[i] >= '0' && argv[i] <= 9))
{
_putchar(s);
return (1);
}
else
{
sum += atoi argv[i];
}
_putchar('\n');
}
}
return (0);
}
