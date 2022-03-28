#include "main.h"
#include <stdio.h>
#include <math.h>

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

sum2 += a[i][abs(size - i)];
}
printf("%d, %d\n", sum1, sum2);
}
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}