#include "holberton.h"

/**
 *powB - raises the number base to power power
 *@base : the base
 *@power : the power
 *Return: return the answer
 */
void print_array(int *a, int n)
{
int i;

for(i =0; i<n; i++)
{
printf("%d", a[i]);
if(i< n-1)
printf(", ");
}  
}
