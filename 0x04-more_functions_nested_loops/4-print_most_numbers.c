#include "main.h"

/**
*print_most_numbers-function
*/

void print_most_numbers(void)
{
int i;
i = 0;
while (i < 10)
{
if ((i == 2) || (i == 4))
{
continue;
}
else
{
_putchar(i + 48);
i++;
}
}
_putchar('\n');
}
