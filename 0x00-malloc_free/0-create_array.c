#include "holberton.h"

/**
*create-array - creates an array.
*@size: int.
*@c: character.
*
*Return : pointer to allocated array address.
*/
char *create_array(unsigned int size, char c)
{
int i;
char *ar;
if (size = 0)
{
return (NULL);
}
else
{
ar = malloc(size * sizeof(char));
for (i = 0; i < size; i++)
{
ar[i] = c;
}
}
return (ar);
}
