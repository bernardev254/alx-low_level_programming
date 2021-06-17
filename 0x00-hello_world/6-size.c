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
printf("size of a char : %lu.", (unsigned long)sizeof(c), "byte(s)\n");
printf("size of an int : %lu.", (unsigned long)sizeof(i), "byte(s)\n");
printf("size of a long int: %lu.", (unsigned long)sizeof(l), "byte(s)\n");
printf("size of a long long int :%lu.", (unsigned long)sizeof(ll), "byte(s)\n");
printf("size of a float :%lu.", (unsigned long)sizeof(f), "byte(s)\n);
return (0);
}
