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
	if (!name || !f)
		return;
	f(name);
}
