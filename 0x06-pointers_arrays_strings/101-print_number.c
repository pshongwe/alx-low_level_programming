#include "main.h"

/**
 * print_number - prints a number
 * @n: number to print
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int digit;

	if (n < 0)
	{
		_putchar('-');
		digit = -n;
	}
	else
	{
		digit = n;
	}

	if (digit / 10)
	{
		print_number(digit / 10);
	}
	_putchar((digit % 10) + '0');
}
