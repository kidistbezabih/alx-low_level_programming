#include "main.h"
/**
*_strncat-function
*@dest: argument
*@src: argument
*@n: argument
*Return: character
*/

char *_strncat(char *dest, char *src, int n)
{
for (i = 0; i != '\0'; i++)
{
for (int j = 0; src != '\0' && j < n; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
}
return (dest);
}
