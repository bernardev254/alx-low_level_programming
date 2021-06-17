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
printf("size of a char : %lu.\n", (unsigned long)sizeof(c) "byte(s)");
printf("size of an int : %lu.\n", (unsigned long)sizeof(i) "byte(s)");
printf("size of a long int: %lu.\n", (unsigned long)sizeof(l) "byte(s)");
printf("size of a long long int :%lu.\n", (unsigned long)sizeof(ll) "byte(s)");
printf("size of a float :%lu.\n", (unsigned long)sizeof(f) "byte(s)");
return (0);
}
