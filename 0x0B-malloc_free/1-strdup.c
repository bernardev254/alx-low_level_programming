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
int len;
{
if (str == NULL)
return (NULL);
len = strlen(str) + 1;
ar = (char *)malloc(sizeof(char) * len);
if (ar == NULL)
{
fprintf(stderr, "failled to allocate memory\n");
return (ar);
}
/**
while (*str != '\0')
*ar++ = *str++;
}
ar[strlen(str)] = '\0';
*/
return (memcpy(ar, str, len));
}
