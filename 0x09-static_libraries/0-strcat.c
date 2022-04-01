#include "main.h"

/**
*_strlen-function
*@s: argument
*Return: int
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
*_strcat-function
*@dest: argument
*@src: argument
*Return: character
*/

char *_strcat(char *dest, char *src)
{
char *ptr = dest + _strlen(dest);
while (*src != '\0')
{
*ptr++ = *src++;
}
*ptr = '\0';
return (dest);
}
