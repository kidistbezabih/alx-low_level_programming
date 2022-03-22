#include "main.h"
/**
 *_strlen - returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{   
int i;
i = 0;
while(s[i])
i++;
return (i);
}


void rev_string(char *s)
{
int i;
int len;
len = _strlen(s);

for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
