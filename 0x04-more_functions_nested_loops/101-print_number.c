#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -m;
	}
	if ((n / 10) > 0)
	{
		print_number(m / 10);
	}
	_putchar('0' + (n % 10));
}

