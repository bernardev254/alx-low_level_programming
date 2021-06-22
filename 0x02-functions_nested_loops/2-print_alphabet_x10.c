#include "holberton.h"
/**
*print_alphabet_x10 - prints 10 times alphabets in lower case followed by a new line
*
*Returns void to whoever called the function
*/
void print_alphabet_x10(void)
{
int i;
for (i = 0; i <= 9; i++)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
