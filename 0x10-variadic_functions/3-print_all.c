#include "variadic_functions.h"

void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

/**
 * print_all - Prints a variable number of
 * arguments based on the provided format.
 * @format: The format string specifying the types of arguments to be printed.
 * @...: A variable number of arguments to be printed based on the format.
 */
void print_all(const char * const format, ...)
{
va_list args;
char current_format;
int i, num_args;
const char *fmt;

va_start(args, format);
fmt = format;
va_start(args, format);
num_args = 0;

while (*fmt)
{
if (*fmt == 'c' || *fmt == 'i' || *fmt == 'f' || *fmt == 's')
{
num_args++;
}
fmt++;
}

for (i = 0; i < num_args; i++)
{
if (i > 0)
{
printf(", ");
}
current_format = format[i];

switch (current_format)
{
case 'c':
print_char(args);
break;
case 'i':
print_int(args);
break;
case 'f':
print_float(args);
break;
case 's':
print_string(args);
break;
}
}

va_end(args);

printf("\n");
}

/**
 * print_char - Prints a character argument.
 *
 * @args: va_list containing the variable arguments.
 */
void print_char(va_list args)
{
char c;

c = (char) va_arg(args, int);
printf("%c", c);
}

/**
 * print_int - Prints an integer argument.
 *
 * @args: va_list containing the variable arguments.
 */
void print_int(va_list args)
{
int i;

i = va_arg(args, int);
printf("%d", i);
}

/**
 * print_float - Prints a float argument.
 *
 * @args: va_list containing the variable arguments.
 */
void print_float(va_list args)
{
float f;

f = (float) va_arg(args, double);
printf("%f", f);
}

/**
 * print_string - Prints a string argument.
 * If the string is NULL, prints "(nil)" instead.
 *
 * @args: va_list containing the variable arguments.
 */
void print_string(va_list args)
{
char *s;

s = va_arg(args, char *);
if (s != NULL)
{
printf("%s", s);
}
else
{
printf("(nil)");
}
}
