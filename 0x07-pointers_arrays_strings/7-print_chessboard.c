#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to chessboard
 */
void print_chessboard(char (*a)[8])
{
int i, j;

for (j = 0; j < sizeof(a)/sizeof(*a); j++)
{
for (i = 0; i < 8; i++)
_putchar(a[j][i]);
_putchar('\n');
}
}
