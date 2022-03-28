#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: target char
 * Return: pointer to first occurrence of c or NULL if char not found
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (c == *s)
{
return (s);
}
s++;
}
if (!c)
return (s);
return (NULL);
}

/**
 * _strspn- locates a character in a string
 * @accept: string
 * @s: target char
 * Return: length of the string
 */

int _strspn(char *s, char *accept)
{
int len = 0;
if ((s == NULL) || (accept == NULL))
return (len);
while (*s && _strchr(accept, *s1++))
{
len++;
}
return (len);
}
