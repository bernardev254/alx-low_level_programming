#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 *str_nconcat - concatenates two strings.
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
	ptr = malloc(sizeof(s1) + sizeof(s2) - sizeof(char));
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
	return (ptr);
}

