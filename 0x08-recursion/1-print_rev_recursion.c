#include "main.h"

/**
*_print_rev_recursion - function
*@s: argument
*Return: void
*/

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(1 + s);
_putchar(*s);
}
}
