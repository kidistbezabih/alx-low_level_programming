#include "main.h"
/**
*_strlen-function
*@s: argument
*Return: character
*/

int _strlen(char *s)
{
int i;
i = 0;
while (s[i])
i++;
return (i);
}

/**
*_strncat-function
*@dest: argument
*@src: argument
*@n: argument
*Return: character
*/

char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest + _strlen(dest);
while (*src != '\0' && n--)
{
*ptr++ = *src++;
}
*ptr = '\0';
return (dest);
}
