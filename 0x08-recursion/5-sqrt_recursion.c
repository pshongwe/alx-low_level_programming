#include "main.h"

int power(int base, int exponent);

/**
 * power - raise number to power
 * @base: number to raise to power
 * @exponent: number of times to multiple number by itself by
 * Return: result of a number multiplying itself exponent times
 */
int power(int base, int exponent) {
    int result = 1;
    while (exponent > 0) {
        result *= base;
        exponent--;
    }
    return result;
}

/**
 * _sqrt_helper - returns the natural square root of a number
 * @n: parameter n
 * @start: start range
 * @end: end range
 *
 * Return: square root of a number
 */
int _sqrt_helper(int n, int start, int end)
{
int mid, square;

if (start > end)
return (end);

mid = start + (end - start) / 2;
square = power(mid, 2);

if (square == n)
return (mid);
else if (square > n)
return (_sqrt_helper(n, start, mid - 1));
else
return (_sqrt_helper(n, mid + 1, end));
}

/**
 * _sqrt_recursion - calculate the square root of a number
 * @n: number
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 0, n));
}
