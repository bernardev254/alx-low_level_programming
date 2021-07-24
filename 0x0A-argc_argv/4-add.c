#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - sum of arguments
 * @argc: no of argument.
 * @argv:arguments vector.
 *
 *Return: sum of arguments.
 */

int main(int argc, char **argv)
{
int result = 0;
if (argc <= 1)
{
printf("0\n");
}
else if (isalpha(*(*argv++)++))
{
printf("Error\n");
return (1);
break;
}
else
{
result += atoi(*argv++);
}
return (0);
}

