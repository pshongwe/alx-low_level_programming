#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints a variable number of
 * strings separated by a separator.
 * @separator: The string separator to be printed between strings.
 * @n: The number of strings to print.
 * @...: A variable number of arguments (strings) to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
const char *str;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, const char *);

while (*str)
{
	printf("%c", *str);
	str++;
}

if (i < n - 1 && separator != NULL)
{
	while (*separator)
	{
		printf("%c", *separator);
		separator++;
	}
}
}

va_end(args);

printf("\n");
}
