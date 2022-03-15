#include "stdio.h"

/**
* main - check the code
*
* Return: Always 0.
*/

void print_alphabet()
{
char i; 
for(i = 'a'; i <= 'z'; i++ )
{
putchar(i);
}
}

int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
print_alphabet();
putchar('\n');
}
return (0);
  
}
