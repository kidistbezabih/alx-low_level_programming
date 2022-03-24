#include "main.h"
/**
*_strcat-function
*@dest: argument
*@src: argument
*Return: character
*/

char *_strcat(char* dest, char* src)
{
char* ptr = dest + strlen(dest);
while (*src != '\0') {
*ptr++ = *src++;
}
*ptr = '\0';
return (dest);
}
