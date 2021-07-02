#include "holberton.h"

/**
 * strcpy - copies a string to another string.
 *@dest:string to append to
 *@src:string to append
 *
 * Return:pointer to the copied string.
 */
char strcpy(char *dest, char *src)
{
int i,length;
length = 0;
for (i = 0; length != '\0'; i++)
length++;
for (i = 0; src[i] != '\0'; i++)
*dest(length + i) = *src +i;
*dest(length + i) = '\0';
return (dest);
}
print_array(array, 0);
print_array(array, -1);
return (0);
}
