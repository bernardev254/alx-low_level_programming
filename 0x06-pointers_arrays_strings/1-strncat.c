#include "holberton.h"
#include <string.h>

/**
 *_strncat - concatenates two strings.
 *@dest:pointer param.
 *@src:pointer param.
 *@n:integer
 *
 *Return:a pointer to the concatenated string.
 */

void *_strncat(char *dest, char *src, int n)
{
if (n != 0)
{
char *d = dest;
char *s = src;

while (*d != 0)
d++;
do {
*d = *s++;
if (*d == 0)
break;
d++;
}
while (--n != 0)
*d = 0;
}
return (dest);
}

