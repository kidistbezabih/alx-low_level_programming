#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    r = _isalpha('o');
    r = _isalpha(108);
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
