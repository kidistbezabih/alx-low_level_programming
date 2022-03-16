#include "main.h"
/**
 * _abs - the function
 *@m: parameter
 *If :return 1.
 * Return: Always 0.
 */
int print_last_digit(int c)
{
int x;
x = 0;
int n = floor(log10(abs(the_integer))) + 1;
while (x < n+1)
{
c = c % 10;
}
return (c);
