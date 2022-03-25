#include "main.h"

/**
*string_toupper-function
*@s: argument
*Return: char
*/

char *string_toupper(char *s)
{
char *ptr = s;

while (*s)
{
if (*s >= 97 && *s <= 122)
*s -= 32;
s++;
}
return (ptr);
}
