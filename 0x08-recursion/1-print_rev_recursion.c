#include "main.h"

/**
*_puts_recursion - function
*@s: argument
*Return: void
*/

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_puts_recursion(++*s);
_putchar(*s);
}
