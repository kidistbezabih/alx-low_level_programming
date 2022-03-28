#include "main.h"
/**
 *_strchr- returns the length of a string
 *@s: char
 *@c: char
 * Return: char
 */


char *_strchr(char *s, char c)
{

while (*s)
{
if (*s == c)
{
return (s);
}
s++;
}
if (!c)
{
return (s);
}
return (NULL);
}
