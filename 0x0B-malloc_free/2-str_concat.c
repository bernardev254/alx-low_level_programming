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
int len, len2;
len = strlen(s1);
len2 = strlen(s2);
if (s1 == NULL && s2 == NULL)
return (NULL);
ar = malloc((sizeof(char) * len) + (sizeof(char) * len2) + (sizeof(char)));
if (ar == NULL)
{
fprintf(stderr, "failled to allocate memory\n");
return (NULL);
}
while (*s2 != '\0')
{
*s1++ = *s2++;
ar = s1;
*ar++ = '\0';
}
return (ar);
}
