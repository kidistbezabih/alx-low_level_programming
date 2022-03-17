#include "main.h"

/**
*_isupper-function
*@c: int
*@x: is int 
*Return:int 
*/

int _isupper(int c)
{
int x = _putchar();
if ((x >= 65) && (x <= 90))
{
c = 1;
}
else
{
c = 0;
}
return (c);
}
