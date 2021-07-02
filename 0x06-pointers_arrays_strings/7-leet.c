#include "holberton.h"
/**
*leet - encodes a string to 1337.
*@str:string to be encoded
*
*Return:pointer to the encoded string
*/

char *leet(char *str)
{
int i, j;
char change[] = "AaEeOoTtLl";
char to[] = "4433007711";
for (i = 0; str[i] = '\0'; i++)
{
for (j = 0; change[j] != '\0' && to[j] != '\0'; j++)
{
if (str[i] == change[j])
{
str[i] = to[j];
}
}
}
return (str);
}
