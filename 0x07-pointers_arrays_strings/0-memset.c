#include "main.h"
/**
 *_memset- returns the length of a string
 *@b: char
 *@n: int
 *@s: char
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
int i;
i = 0;
while (i < n)
{
*p = b;
i++;
p++;
}
return (s);
}
