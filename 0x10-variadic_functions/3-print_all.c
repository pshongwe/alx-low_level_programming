#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints a variable number of arguments
 * based on the provided format.
 * @format: The format string specifying the types of arguments to be printed.
 * @...: A variable number of arguments to be printed based on the format.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char c;
	float f;
	char *s;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				break;
		}
		if (format[i + 1] && (format[i] == 'c'
		|| format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
		printf(", ");
		i++;
	}
va_end(args);
printf("\n");
}

