#include "main.h"

/**
 * puts_half- returns the length of a string
 * @str: string
 * Return: length of string
 */
void puts_half(char *str)
{
int len = _strlen(str);
int n;
int i;
n = (len % 2 == 0) ? len/2 : (len - 1) / 2 + 1;
for (i = n; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
