#include "main.h"
/**
*_strcat-function
*@dest: argument
*@src: argument
*Return: character
*/


char *_strcat(char *dest, char *src)
{
while (*src != '\0')
{
*dest  += *src;
src++;
}
return (dest);
}
