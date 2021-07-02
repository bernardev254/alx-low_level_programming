#include "holberton.h"
#include <string.h>

/**
 *_strncpy - copies a string.
 *@dest: pointer param.
 *@src: pointer param.
 *@n:int n.
 *
 *Return:pointer to copied string.
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && *(src + i) !='\0'; i++)
{
*(dest + i) = *(src + i);
}
for (; i < n; i++)
{
*(dest + i) = '\0';
}
return (dest);
}
