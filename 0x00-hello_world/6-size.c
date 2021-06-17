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
printf("size of a char: %zu byte(s)\n", (unsigned long)sizeof(c));
printf("size of an int: %zu byte(s)\n", (unsigned long)sizeof(i));
printf("size of a long int: %zu byte(s)\n", (unsigned long)sizeof(l));
printf("size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(ll));
printf("size of a float: %zu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
