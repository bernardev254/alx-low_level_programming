#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*create_array - creates an array.
*@size: int.
*@c:char
*
*Return: pointer
*/

char *create_array(unsigned int size, char c)
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
