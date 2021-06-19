#include <stdio.h>
/**
*main-Entry point
*
*Return:0 for success
*/
int main(void)
{
char ch,c;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (c = '1'; c <= '9'; c++)
{
putchar(c);
putchar('\n');
return (0);
}
