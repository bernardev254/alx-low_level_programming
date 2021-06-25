#include <stdio.h>
/**
*main - prints  numbers 1-100 with exception of multiples of 3 & 5.
*
*Return:1 on success.
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%d ", i);
}
}
return (1);
}
