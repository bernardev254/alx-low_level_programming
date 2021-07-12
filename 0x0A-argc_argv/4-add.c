#include <stdio.h>
#include <stdlib.h>

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
if (!(atoi(*(argv + i)) >= '0' && atoi(*(argv + i)) <= '9'))
{
printf("%s", s);
return (1);
}
else
{
sum += atoi(argv[i]);
printf("%d\n", sum);
}
}
printf("0\n");
}
return (0);
}
