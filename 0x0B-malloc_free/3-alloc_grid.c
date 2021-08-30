#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
*alloc_grid - returns a pointer to 2d array
*@width:array width
*@height: array height
*
*Return: pointer to array
*/

int **alloc_grid(int width, int height)
{
int **arrr = NULL, *arr = NULL;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
arrr = malloc((sizeof(int *) * height) + (sizeof(int) * height * width));
arr = (int *)(arrr + height);
if (arrr != NULL)
for (i = 0; i < height; i++)
{
arrr[i] = arr + (i * width);
for (j = 0; j < width; j++)
arrr[i][j] = 0;
}
else
return (free(arrr), NULL);
return (arrr);
}
