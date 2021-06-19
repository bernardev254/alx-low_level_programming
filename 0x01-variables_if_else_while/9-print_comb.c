#include <stdio.h>
/**
*main-Entry point
*
*Return:0 for success
*/
int main(void)
{
int ch;
for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
