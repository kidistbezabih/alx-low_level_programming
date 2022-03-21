#include "main.h"
/**
 * puts2 - prints one char out of 2 of a string, followed by
 * a new line
 * @str: string str
 */
void puts2(char *str)
{
int len = _strlen(str);
int i;
for (i = 0; i < len; i++)
{
_putchar(str[i]);
i += 1;
}
}
