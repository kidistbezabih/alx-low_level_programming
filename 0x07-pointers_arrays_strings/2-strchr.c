#include "main.h"
/**
 *_strchr- returns the length of a string
 *@s: char
 *@c: char
 * Return: char
 */

char *_strchr(char *s, char c)
{
while (*s != c && *s != '\0')
{
s++;
}
if (*s == c)
{
return (s);
}
else
{
return (NULL);
}
}
