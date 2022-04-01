#include "main.h"

/**
 * isPrime - function
 * @i: int
 * @j: int
 * Return: 1 if true, 0 if false
 */

int is_palindrome(char *s)
{
    char *z = s;
    if (*s != *z)
        return (0);
    return(is_palindrome(*s++));
    if (*s == *z)
        {
            *z++;
        }
return (1);
}
