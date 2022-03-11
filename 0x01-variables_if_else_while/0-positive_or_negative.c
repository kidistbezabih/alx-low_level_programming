#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int p = rand();

    if (p > 0)
        printf("is positive\n");

    else if (p == 0)
        printf("is zero\n");

    else
        printf("is negative\n");
	return (0);
}
