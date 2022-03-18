#include "main.h"
/**
*print_triangle-function
*@size:argument
*Return: void
*/


void print_triangle(int size)
{
int i, j;
int k;
for (i = 0; i < size; i++)
{
for (j = size - i; j > 1; j--)
{
printf("%c", ' ');

}

for (k = 0; k <= i; k++)
{
printf("%c", '#');
}
printf("%c", '\n');
}
}
