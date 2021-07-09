#include "holberton.h"
#include <string.h>

/**
 *_strcat - appends *src to *dest
 *@dest:pointer param.
 *@src:pointer param.
 *
 *Return:char pointer.
 */

char *_strcat(char *dest, char *src)
{
int a, c = 0;
for (a = 0; dest[a] != '\0'; a++)
{
c++;
}
for (a = 0; src[a] != '\0'; a++)
{
dest[c + a] = src[a];
}
dest[c + a] = '\0';
return (dest);
}
