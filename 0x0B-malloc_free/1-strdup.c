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
unsigned int i;
char *ar;
{
if (size == 0)
return (NULL);
ar = malloc(size * sizeof(char));
if (ar == NULL)
{
fprintf(stderr, "failled to allocate memory\n");
return (ar);
}
for (i = 0; i < size; i++)
ar[i] = c;
}
return (ar);
}
