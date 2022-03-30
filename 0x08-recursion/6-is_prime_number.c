#include "main.h"

/**
 * isPrime - function
 * @i: int
 * @j: int
 * Return: 1 if true, 0 if false
 */
int isPrime(int i, int j)
{
if (j == 1)
{
return (1);
}
if (i % j == 0)
{
return (0);
}
else
{
return (isPrime(i, j - 1));
}
}

/**
 * is_prime_number - function
 * @n: int
 * Return: 1 if is prime, 0 if not
 */
int is_prime_number(int n)
{
if (n < 3)
{
return (0);
}
else
{
return (isPrime(n, n - 1));
}
}
