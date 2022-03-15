#include "main.h"

/**
 * _isalpha - the function
 *@c: parameter
 *If :return 1.
 * Return: Always 0.
 */

int _isalpha(int m)
{
if ((m >= 65 && m <= 90) || (m >= 97 && m <= 122))
{
return (1);
}
return (0);
}
