#include <stdio.h>

/**
*main-function
*/
int main(void)
{
int i; j; 
i = 0;

char f[] = "Fizz";
char b[] = "Buzz";
char fb[] = "FizzBuzz";
while (i < 100)
{
if (((i + 1) % 3) == 0 )
{
    for (j = 0; f[j] != '\0'; j++)
    {
    _putchar(f[j]);
    }
}


else if (((i + 1) % 5) == 0 )
{
    for (j = 0; b[j] != '\0'; j++)
    {
    _putchar(b[j]);
    }
}

{
else if((((i + 1) % 3) == 0 ) && (((i + 1) % 5) == 0 ))
{
    for (j = 0; fb[j] != '\0'; j++)
    {
    _putchar(fb[j]);
    }
}
else
{
_putchar(i);
}
}
}
return (0);
