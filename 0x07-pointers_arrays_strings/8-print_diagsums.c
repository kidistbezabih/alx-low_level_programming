#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the chessboard
 * @a: pointer to chessboard
 * @size: pointer to chessboard
 */

void print_diagsums(int *a, int size)
{
int sum1, sum2, i, j;
sum1 = 0;
sum2 = 0;

for (i = 0; i < size; i++)

{
sum1 += a[i][i];

sum2 += a[i][size - i];
}
printf("%d, %d\n", sum1, sum2);
}
