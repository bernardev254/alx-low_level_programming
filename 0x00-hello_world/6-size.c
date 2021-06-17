#include<stdio.h>
/**
*main-Entry point
*
*Return:Always 0(success)
*/
int main(void)
{
int i;
char c;
float f;
long int l;
long long int ll;
printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(ll));
printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
