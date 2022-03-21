#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *str)
{
   int i=0;
    while(str[i])
    i++;
    return i;
}
void puts_half(char *str)
{
    int len = _strlen(str);
    int n;
    int i;
    n = (len % 2 == 0) ? len/2 : (len-1)/2 + 1;
    for(i =n; i<len; i++)
    {
        _putchar(str[i]);
    }
       
    }
