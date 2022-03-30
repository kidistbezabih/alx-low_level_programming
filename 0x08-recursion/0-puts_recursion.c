#include "main.h"

/**
*_puts_recursion - function
*@s: argument
*Return: void
*/

void _puts_recursion(char *s)
{
while (*s != '\0')
{
_putchar(*s);
*s++;
}
_putchar('\n');
}
