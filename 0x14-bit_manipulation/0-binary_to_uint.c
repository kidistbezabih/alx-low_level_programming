#include "main.h"

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
