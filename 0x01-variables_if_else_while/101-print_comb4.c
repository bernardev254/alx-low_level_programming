#include <stdio.h>
/**
*main-Entry point
*
*Return:0 for success
*/
int main(void)
{
int ch, c;
for (ch = '0'; ch <= '9'; ch++)
{
for (c = '0'; c <= '9'; c++)
{
for (a = '0'; a <= '9'; a++)
{
putchar(ch);
putchar(c);
putchar(a)
putchar(',');
} 
}
}
putchar('\n');
return (0);
}
