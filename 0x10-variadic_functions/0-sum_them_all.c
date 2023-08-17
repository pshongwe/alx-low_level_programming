#include "variadic_functions.h"

/**
 * sum_them_all - Calculates the sum of a variable number of integers.
 *
 * @n: The number of integers to sum.
 * @...: A variable number of arguments (integers) to be summed.
 *
 * Return: The sum of the provided integers.
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
