#include "main.h"
/**
*_puts-function
*@str: char argument
*Return: 
*/

void _puts(char *str)
{
int i;
char c[];
for(i = 0; str[i] != '\0'; i++)
{
c = c + str[i];
}
_putchar(c);
}
