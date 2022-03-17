#include "main.h"

/**
*_isdigit-function
*@c: int
*Return:c
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
c = 1;
}
else
{
c = 0;
}
return (c);
}
