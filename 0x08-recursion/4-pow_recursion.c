#include "main.h"

/**
*_pow_recursion - function
*@y: argument
*@x: argument
*Return: int
*/
int _pow_recursion(int x, int y)
{
if (y != 0)
return (x * power(x, y - 1));
else
return 1;
}
}
