#include "main.h"
/**
 * _abs - the function
 *@m: parameter
 *If :return 1.
 * Return: Always 0.
 */
int print_last_digit(int c)
{
while ((c % 10) > 10)
    c = c % 10;

return (c);
}
