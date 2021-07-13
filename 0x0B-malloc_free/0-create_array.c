#include "holberton.h"
/**
*create_array - creates an array.
*@size: int.
*@c:char
*
*Return: pointer
*/

char *create_array(unsigned int size, char c)
{
  int i;
  char *ar;
  {
    ar = (size * sizeof(char));
    for (i = 0; i < size; i++)
      ar[i] = c;
  }
  return (ar);
}
  
