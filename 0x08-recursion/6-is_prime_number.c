#include "main.h"

/**
 * is_prime_number - returns 1 if n is a prime number, else returns 0.
 * @n: integer parameter
 *
 * Return: 1 if  n is prime number, 0 if not
 *
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
if (n == 2 || n == 3 || n == 5)
return (1);
if ((n % 2 == 0) || (n % 3 == 0))
return (0);
else
return (1);
}
