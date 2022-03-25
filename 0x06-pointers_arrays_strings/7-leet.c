#include "main.h"
/**
 * leet - encodes a string into 1337
 * @ch: String
 * Return: string that is encoded
 */
char *leet(char *ch)
{
char *cp = ch;
char key[] = {'A', 'E', 'O', 'T', 'L'};
int value[] = {4, 3, 0, 7, 1};
unsigned int i;
while (*ch)
{
for (i = 0; i < sizeof(key) / sizeof(char); i++)
{
if (*ch == key[i] || *ch == key[i] + 32)
{
*ch = 48 + value[i];
}
}
c++;
}

return (cp);

}
