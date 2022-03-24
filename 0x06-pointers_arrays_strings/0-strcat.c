#include "main.h"
/**
*_strcat-function
*@dest: argument
*@src: argument
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

char *_strcat(char *dest, char *src)
{

while (*src != '\0')
{
*dest  += *src;
src++;

}
return (dest);
}
