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
while (ch != ('e' || 'q'))
{
putchar(ch);
ch++;
}
}
putchar('\n');
return (0);
}
