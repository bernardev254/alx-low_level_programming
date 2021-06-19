#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main-Entry point
*
*Return:Always0 (success)
*/
int main(void)
{
int n, mod, lastdigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
mod=n%10;
if (mod < 0)
{
lastdigit = mod;
}
else
{
lastdigit = mod;
} 
if(lastdigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n",n,mod);
}
else if((n !=0) && (n < 6))
{
printf("Last digit of %d is %d and is less than 6 and not 0\n",n,mod);
}
else
{
printf("Last digit of %d is 0 and is 0\n",n);
}
return (0);
}
