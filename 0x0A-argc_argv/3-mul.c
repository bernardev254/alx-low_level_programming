#include <stdio.h>
#include <stdlib.h>
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
if (argc == 3)
{
result = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", result);
}
else
{
printf("%s\n", s);
return (1);
}
return (0);
}
