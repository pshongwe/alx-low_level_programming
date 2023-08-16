#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using the provided printing function.
 *
 * @name: The name to be printed.
 * @f: A function pointer that takes a char pointer as an
 * argument and prints characters.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
 * print_with_putchar - Prints a string character by
 * character using putchar.
 *
 * @str: The string to be printed.
 */
void print_with_putchar(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
