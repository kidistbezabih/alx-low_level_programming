#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */
/* description for betty */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    n = rand() % 100;

    if (n > 0)
    {
    printf("%d is positive\n",n);
    }

    else if (n == 0)
    {
    printf("%d is zero\n", n);
    }

    else
    {
    printf("%d is negative\n", n);
    }
	return (0);
}
