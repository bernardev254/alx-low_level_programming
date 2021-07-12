#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - sum of arguments
 * @argc: arguments count
 *@argv:arguments vector
 *
 * Return: On success 0.
 */
int main(int argc, char **argv)
{
int sum = 0;
int i, j;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] >= '0' && argv[i][j] <= '9')
{
sum += atoi(argv[i][j]);
printf("%d\n", sum);
return (1);
}
else
{
printf("Error\n");
}
}
}
}
printf("0\n");
return (0);
}
