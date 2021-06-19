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
if ( ch != ('e' || 'q'))
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
