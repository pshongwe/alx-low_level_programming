#include "main.h"

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
square = mid * (mid);

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

