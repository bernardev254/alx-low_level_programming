#include "holberton.h"
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
    ar = malloc(size * sizeof(char));
    for (i = 0; i < size; i++)
      ar[i] = c;
    if (ar == NULL)
      fprintf(stderr,"failled to allocate memory\n");
  }
  return (ar);
}
  
