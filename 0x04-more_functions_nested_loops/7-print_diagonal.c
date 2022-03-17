#include "main.h"

/**
*print_diagonal-function
*@n: diagonal
*/

void print_diagonal(int n)
{
int i;

if (n > 0)
{
for (i = 1; i <= n; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
else
{
_putchar('\n');
}
}
