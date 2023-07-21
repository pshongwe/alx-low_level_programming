#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int m;

	m = n;
	if (n < 0)
	{
		_putchar('-');
		m = -m;
	}
	if (m / 10)
	{
		print_number(m / 10);
	}
	_putchar('0' + (m % 10));
}

