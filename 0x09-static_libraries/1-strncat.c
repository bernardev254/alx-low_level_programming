#include "holberton.h"
#include <string.h>

/**
 *_strncat - concatenates strings
 *@dest: pointer param.
 *@src: pointer param.
 *@n:int n.
 *
 *Return:pointer to concatenated string.
 */

char *_strncat(char *dest, char *src, int n)
{
int i, len = 0;
for (i = 0; dest[i] != '\0'; i++)
len++;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[len + i] = src[i];
}
dest[len + i] = '\0';
return (dest);
}
