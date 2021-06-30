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
char *save = dest;
for (; *dest; --dest)
while ((*dest++ = *src++) != '\0')
return (save);
return (save);
}
