#include "main.h"
#include <stddef.h>

/**
*len- print lengt of string
*@b: char argument
*Return:  int
*/
int len(const char *b)
{
int l, i;
i = 0;
l = 0;
while (b[i] != '\0')
{
l++;
i++;
}
return (l);
}

/**
*power - two the power of the size
*@z: an argument
 * Return: Pointer to new space in memory, NULL if it fails
 */

int power(int z)
{
int i, result;
i = 0;
result = 1;
while (i < z)
{
result *= 2;
i++;
}
return (result);
}


/**
*binary_to_uint- change to binary
*@b: char argument
* Return: binary value , 0 if it fails
*/

unsigned int binary_to_uint(const char *b)
{
int ln, i, binval, size, s;
binval = 0;
i = 0;
if (b == NULL)
return (0);
ln = len(b);
while (*b != '\0')
{
if (*b > '9' || *b < '0')
return (0);
size = ln - 1 - i;
s = ((int)(*b)) - 48;
binval += (s *power(size));
i++;
*b++;
}
return (binval);
}

#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}