#include "holberton.h"
/**
 *_strpbrk - scans a string and returns the address
 *@s:pointer to mem location
 *@accept:pointer to string
 *
 *Return:no of bytes from the source substring
 */

char *_strpbrk(char *s, char *accept)
{
int i, j, pos, flag = 0;
for (i = 0; s[i] != '\0';i++);
pos = i;
for (i = 0;accept[i] != '\0';i++)
{
for (j = 0;s[j] != '\0';j++)
{
if (accept[i] == s[j])
{
if (j <= pos)
{
pos = j;    
flag = 1;    
}
}
}        
}
if (flag == 1)
{
return &s[pos];
}
else
{
return NULL;
}
}
}
