#include "main.h"

/**
*_isupper-function
*@c: int
*@x: is int
*Return:int
*/

int _isupper(int c)
{
if ((c >= 65) && (c <= 90))
{
c = 1;
}
else
{
c = 0;
}
return (c);
}
