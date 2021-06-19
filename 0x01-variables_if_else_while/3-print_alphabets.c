#include <stdio.h>
/**
*main-Entry point
*
*Return:0 for success
*/
int main(void)
{
for (char ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
} 
for (char c = 'A'; c <= 'Z'; c++) 
{
putchar(c);
} 
putchar('\n');
return (0);
}
