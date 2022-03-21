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
_putchar('/n');
}
