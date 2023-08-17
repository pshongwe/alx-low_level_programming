#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints a variable number of
 * integers separated by a separator.
 * @separator: The string separator to be
 * printed between integers.
 * @n: The number of integers to print.
 * @...: A variable number of arguments (integers) to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
