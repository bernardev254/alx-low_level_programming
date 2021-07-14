#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
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
ar = malloc(sizeof(char *) + 1);
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
