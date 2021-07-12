#include "holberton.h"

/**
 * main - multiplies two numbers
 * @argc: arguments count
 *@argv:arguments vector
 *
 * Return: On success 0
 */
int main(int argc, char **argv)
{
char *s = "Error";
int result = 0;
int a = argv[1];
int b = argv[2];
if (argc == 3)
{
result = a * b;
_putchar('result');
}
else
{
_putchar(s);
return (1);
}
_putchar('\n');
return (0);
}
