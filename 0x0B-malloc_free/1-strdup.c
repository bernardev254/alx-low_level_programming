#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
*_strdup - duplicates a string.
*@str: string.
*
*Return: pointer to string duplicate
*/

char *_strdup(char *str)
{
char *ar;
{
if (str == NULL)
return (NULL);
ar = (char *)malloc(sizeof(char) * (strlen(str) + 1));
if (ar == NULL)
{
fprintf(stderr, "failled to allocate memory\n");
return (ar);
}
while (*str != '\0')
*ar++ = *str++;
}
return (ar);
}
