#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
*str_concat - duplicates a string.
*@s1: string.
*@s2: string
*
*Return: pointer to string concatenated
*/

char *str_concat(char *s1, char *s2)
{
char *ar;
int len, len2 = 0;
int i = 0;
int j = 0;
len = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len] != '\0')
{
len++;
}
while (s2[len2] !='\0')
{
len2++;
}
len2++;
ar = malloc(sizeof(*s1) * (len2 + len)+sizeof(char));
if (ar == NULL)
{
fprintf(stderr, "failled to allocate memory\n");
return (NULL);
}
while (i < len)
{
ar[i] = s1[i];
i++;
}
ar[i] = s1[i];
while (j <= len2)
{
ar[i] = s2[j];
i++;
j++;
}
ar[i] =s2[i];
return (ar);
}
