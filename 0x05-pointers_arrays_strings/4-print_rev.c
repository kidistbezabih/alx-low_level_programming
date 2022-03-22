#include "main.h"


/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
int length = 0;

while (*s)
{
length += 1;
s += 1;

}
return (length);
}

/**
*peint_rev-function
*@s: char argument
*Return: void
*/

void print_rev(char *s)
{
int i;
int len;
len = _strlen(s);

for(i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
