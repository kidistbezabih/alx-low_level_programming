#include "main.h"

/**
 * _strncpy - function
 * @dest: argument
 * @src: arg
 * @n: arg
 * Return:string
 */
char *_strncpy(char *dest, char *src, int n)
{
char *ptr = dest;

while (*src && n--)
*dest++ = *src++;
if (!*src)
while (*dest && n--)
*dest++ = 0;
return (ptr);
}
