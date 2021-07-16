#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 *string_nconcat - concatenates two strings.
 *@s1: pointer to string
 *@s2: pointer to string.
 *@n:no of bytes of s2 to concatenate
 *
 *Return: pointer to resulting string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
        if (n >= strlen(s2))
                n = strlen(s2);
	ptr = malloc(sizeof(*s1) * (strlen(s1) + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (n >= strlen(s2))
	{
		*s1++ = *s2++;
	}
	else
	{
		while (*s2 != *(s2 + (n - 1)))
			*s1++ = *s2++;
	}
	*ptr++ = *s1++;
        *ptr++ = '\0';
	return (ptr);
}

