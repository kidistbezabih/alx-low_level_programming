#include "main.h"

/**
*leet-function
*@str: argument
*Return: char
*/
char *leet(char *str)
{
char *ch = str;
while (*str != '\0')
{
if (*str == 'a' || *str == 'A')
{
*str = 48 + 4;
}
else if (*str == 'E' || *str == 'e')
{
*str = 51;
}
else if (*str == 'o' || *str == 'O')
{
*str = 48;
}
else if (*str == 't' || *str == 'T')
{
*str = 55;
}
else if (*str == 'l' || *str == 'L')
{
*str = 49;
}
else
*str  = *str;


*str++;
}
return (ch);
}
