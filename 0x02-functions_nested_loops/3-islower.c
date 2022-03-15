#include "stdio.h"
#include <ctype.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

 int _islower(int x)
{
int r;
r = islower(x);

if (r == 0)
{
printf("%d", r);
}
else
{
int z;
z = 1;
printf("%d", z);

}
return (r);
}
int main(void)
{
int r;
r = _islower('H');
r = _islower('o');
r = _islower(108);
putchar('\n');
return (0);
}