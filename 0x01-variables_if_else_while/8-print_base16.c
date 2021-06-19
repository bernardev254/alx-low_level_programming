#include <stdio.h>
/**
*main-Entry point
*
*Return:0 for success
*/
int main(void)
{
char ch, c;
for (ch = 'o'; ch <= '9'; ch++)
{
putchar(ch);
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
