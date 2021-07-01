#include "holberton.h"
#include <string.h>

/**
 *_strcmp - compares two strings.
 *@s1: pointer param pointing to first string.
 *@s2:pointer param pointing to second string.
 *
 *Return: integer.
 */
int _strcmp(char *s1, char *s2)
{
for ( ; *s1 == *s2; s1++, s2++)
if (*s1 == '\0')
return (0);
}
