#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main- description
*Return:0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if ((n % 10) > 5)
{
printf("Last digit of %d is %i and is greater than 5\n", n, n%10);
}
if ((n % 10) < 5 && (n % 10) != 0)
{
printf("Last digit of %d is %i and is less than 6 amd not 0\n", n, n%10);
}
if ((n % 10) == 0)
{
printf("Last digit of %d is %d and is 0\n", n, n%10);
}
return (0);
}
