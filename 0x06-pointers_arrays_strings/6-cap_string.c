#include "main.h"

/**
*reverse_array-function
*@str: argument
*Return: char
*/
char *cap_string(char *str)
{
char *s = str;
int i;
i = 0;
while (*str != '\0')
{
if (i == 0)
{
*str -= 32;
}
if (*str == ' ')
{
i = 0;
}
str++;
}
return (s);
}
