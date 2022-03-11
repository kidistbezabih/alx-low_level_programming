#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main- description
*Return:0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
for (char ch = 'a'; ch <= 'z'; ch++)
{
printf("%c", ch);
}

for (char ch = 'A'; ch <= 'Z'; ch++)
{
printf("%c", ch);
}

printf("\n");
return (0);
}
