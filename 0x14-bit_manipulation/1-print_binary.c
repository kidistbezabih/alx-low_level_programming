 #include <stdio.h>
#include "main.h"

/**
* print_binary - convert to binary
* @n:  
*/


void print_binary(unsigned long int n)
{
    if (n > 1)
        print_binary(n / 2);
 
    printf("%d", n % 2);
}
