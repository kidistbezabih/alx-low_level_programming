#include "main.h"

/**
*_strcmp-function
*@s1: argument
*@s2: atrgument
*Return: int
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0')
{
if (*s1 != *s2)
{
break;
}
s1++;
s2++;
}
return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
