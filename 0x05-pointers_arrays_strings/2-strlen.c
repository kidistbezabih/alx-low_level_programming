#include "main.h"
/**
*_strlen-function
*@s: char targument
*Return: c
*/

int _strlen(char *s)
{
int i;
int c = 0;
for (i = 0; s[i] != '\0'; i++)
{
c = i + 1;
}
return (c);
}
