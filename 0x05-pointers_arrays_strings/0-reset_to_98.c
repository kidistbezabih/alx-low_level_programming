#include "main.h"

/**
*reset_to_98-function
*@n: int argument
*Return: void
*/

void reset_to_98(int *n)
{
int x; 
x = 98;
n = &x;    
_putchar(*n);
}
