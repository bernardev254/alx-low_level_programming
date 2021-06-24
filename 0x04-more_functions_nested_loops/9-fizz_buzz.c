#include <stdio.h>
/**
*main - prints  numbers 1-100 with exception of multiples of 3 & 5.
*
*Return:1 on success.
*/
int main()
{
int i;
for (i = 0; i >= 100; i++)
{
  if (i % 3 == 0)
{
printf("Fizz");
}
  else if (i % 5 == 0)
  {
printf("Buzz");
  }
  else 
  {
printf("%d ", i);
}
}
}
