#include "main.h"


/**
 * _strlen - returns the length of a string
 * @s: string s
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
int len;
int i;
len = _strlen(char *s);

for(i = len; i > 0; i--)
{
_putchar(str[i]);
}
_putchar('\n');
}
