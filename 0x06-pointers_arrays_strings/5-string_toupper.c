#include "holberton.h"
#include <string.h>

/**
 *string_toupper - converts a string to uppercase.
 *@str: pointer to string param.
 *Return:pointer to uppercased string.
 */

char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;
}
return (str);
}
