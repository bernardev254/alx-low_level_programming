#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main-Entry point
*
*Return:Always0(success)
*/
int main(void)
{
int n,lastdigit;
srand(time(0));
n=rand()- RAND_MAX/2;
lastdigit=n%2;
if(lastdigit>5)
{
Printf("Last digit of %d is %d and is grater than 5\n",n,lastdigit);
}
else if(n>0 && n<6)
{
printf("Last digit of %d is less than 6 and is not 0\n",n,lastdigit);
}
else
{
printf("Last digit of %d is 0\n",n);
}
return (0);
}

