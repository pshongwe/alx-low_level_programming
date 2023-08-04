#include "main.h"

/**
 * _sqrt_helper - returns the natural square root of a number
 * @c: n is squared and compared against this ref number
 * @base: base number to check
 * Return: square root of a number
 */
int _sqrt_helper(int c, int base)
{
if (c * c == base)
return (c);
if (c * c > base)
return (-1);
return (_sqrt_helper(c + 1, base));
}

/**
 * _sqrt_recursion - calculate the square root of a number
 * @n: number to find square root
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(1, n));
}
