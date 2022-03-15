#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'));
}

