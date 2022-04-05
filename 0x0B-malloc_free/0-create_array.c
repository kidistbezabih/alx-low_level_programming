#include "holberton.h"
#include <stdlib.h>
/**
 * create_array-function
 * @c: The character
 *@size: the size of the array
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
char *s = (char *)malloc(size * sizeof(c));
unsigned int i;

if (size == 0)
return (NULL);

else
{
if (s == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
s[i] = c;
}
return (s);
}
}
