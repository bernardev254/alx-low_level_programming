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
char *start = dest;
if ((dest == NULL) && (src == NULL))
return (NULL);
while (*src && n--)
{
*dest = *src;
dest++;
src++;
*dest = '\0';
}
return (start);
}
