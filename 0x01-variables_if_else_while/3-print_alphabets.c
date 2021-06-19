#include <stdio.h>
/**
*main-Entry point
*
*Return:0 for success
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
int c;
for (c = 'A'; c <= 'Z'; c++) 
{
putchar(c);
} 
putchar('\n');
return (0);
}
