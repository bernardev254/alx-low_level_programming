#include "holberton.h"

/**
 * main - writes the character c to stdout
 * @argc: arguments count
 *@argv:arguments vector 
 *
 * Return: On success 1.
 */
int main(int argc, char **argv)
{
char *s = **argv;
while (*s != '\0')
{
_putchar(*s);
s++;
}
_putchar('\n');
return (1);
}
