#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main- description
*Return:0
*/
int main(void)
{

char ch;
srand(time(0));


for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}

for (ch = 'A'; ch <= 'Z'; ch++)
{
printf("%c", ch);
}

printf("\n");
return (0);
}
