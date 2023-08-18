#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_all - Prints a variable number of
 * arguments based on the provided format.
 * @format: The format string specifying the types of arguments to be printed.
 * @...: A variable number of arguments to be printed based on the format.
 */
void print_all(const char * const format, ...)
{
va_list args;
const char *fmt;

va_start(args, format);

for (fmt = format; *fmt; fmt++)
{
if (*fmt == '%')
{
fmt++;
switch (*fmt)
{
case 'd':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
printf("%s", va_arg(args, char *));
break;
default:
printf("%c", *fmt);
break;
}
}
else
{
printf("%c", *fmt);
}
}

va_end(args);
}
