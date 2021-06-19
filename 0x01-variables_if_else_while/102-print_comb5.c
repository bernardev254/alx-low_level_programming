#include <stdio.h>
/**
*main-Entry point
*
*Return:0 for success
*/
int main(void)
{
int ch, c, a, b;
for (ch = '0'; ch <= '9'; ch++)
{
for (c = '0'; c <= '9'; c++)
{
for (a = '0'; a <= '9'; a++)
{
for (b = '0'; b <= '9'; b++)
{
putchar(ch);
putchar(c);
putchar(a)
putchar(b)
putchar(',');
} 
} 
}
}
putchar('\n');
return (0);
}
