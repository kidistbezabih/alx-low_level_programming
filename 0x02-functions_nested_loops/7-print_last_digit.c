#include "main.h"
/**
 * print_last_digit - the function
 *@c: parameter
 * Return: Always c.
 */
int print_last_digit(int c)
{
while ((c % 10) > 10)
    {
        c = c % 10;
    }

return (c);
}
