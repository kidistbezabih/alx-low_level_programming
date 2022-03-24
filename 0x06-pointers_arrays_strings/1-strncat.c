#include "main.h"
/**
*swap_int-function
*@dest: argument
*@src: argument
*@n: argument
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

char *_strncat(char *dest, char *src, int n)
{
int destlen = _strlen(dest);
int i;

for (i =0; i < n && src[i] != '\0'; i++)
dest[destlen + i] = src[i];

dest[destlen + 1] = '\0';
return (dest); 
}
