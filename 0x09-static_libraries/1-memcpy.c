#include "main.h"
/**
 *_memcpy- returns the length of a string
 *@dest: char
 *@n: int
 *@src: char
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *d = dest;

while (n--)
{
*dest++ = *src++;
}
return (d);
}
