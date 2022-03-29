#include "main.h"
#include <stdio.h>

/**
 * print_diagsums- prints the chessboard
 * @a: pointer to chessboard
 * @size: pointer to chessboard
 */

void print_diagsums(int *a, int size)
{
int *p = a;
int sum1, sum2, i, j;
sum1 = 0;
sum2 = 0;

for (i = 0; i < size * size; i += (size + 1))
{
sum1 += *(p + i);
}

for (i = size - 1; i < (size * size) - 1; i += (size - 1))
{
sum2 += *(p + i);
}
printf("%d, %d\n", sum1, sum2);
}
