#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
int i = 0;
while(s[i])
i++;
return (i);
}
void rev_string(char *s)
{
int len = _strlen(s);
char temp;
int i;
for(i =0; i< len/2; i++)
{
temp = s[i];
char *_strcpy(char *dest, char *src);s[i] = s[len-1-i];
s[len-1-i] = temp;
}
}
