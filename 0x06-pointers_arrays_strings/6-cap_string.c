#include "holberton.h"
/**
*cap_string - capitalizes a string.
*@str: the string to be capitalized.
*
*Return:pointer to the capitalized string
*/

char *cap_string(char *str)
{
int i, j;
char btn[] = ", \ n : . ! ?  \" ( ) { } \t";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; btn[j] != '\0'; j++)
{
if (i == 0)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
}
else if (*(str + i) == btn[j] || *(str + i) == '\n')
{
++i;
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
}
}
}
return (str);
}
