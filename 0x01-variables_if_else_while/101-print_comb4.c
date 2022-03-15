#include <stdio.h>
/**
 *main- description
 *Return:0
 */
int main(void)
{
int i, j, k, c;
c = 0;

for (i = 0; i <= 7; i++)
{
for (j = i + 1; j <= 8; j++)
{
for (k = j + 1; k <= 9; k++)
{

printf("%d%d%d", i, j, k);
c = c + 1;
if (c < 120)
{
printf("%c", ',');
printf("%c", ' ');
}
}
}
}
printf("\n");
return (0);
}
