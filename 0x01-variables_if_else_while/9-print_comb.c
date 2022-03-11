#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main- description
*Return:0
*/
int main(void)
{
int i;

for (i = 48; i < 59; i++)
{
putchar(i);
if (i < 57)
{
putchar(',');
putchar(' ');
}

}

putchar('\n');
return (0);
}
