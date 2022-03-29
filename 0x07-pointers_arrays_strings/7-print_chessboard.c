#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to chessboard
 */
void print_chessboard(char (*a)[8])
{
int i, j;

for (j = 0; j < 8 * 8; j++)
{
if(j % 8 == 0 && j != (8 * 8) - 1) {
_putchar('\n');
}
_putchar(*(a + j));
}
}
