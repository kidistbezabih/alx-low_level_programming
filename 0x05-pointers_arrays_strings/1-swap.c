#include "main.h"

/**
*swap_int-function
*@a: int argument
*@b: in targument
*Return: void
*/

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}

