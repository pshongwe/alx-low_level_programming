#include "main.h"

/**
 * print_number - prints a number
 * @n: number to print
 * Return: nothing
 */
void print_number(int n)
{
	if ((n >= 0 && n <= 9) || (n < 0 && n >= -9))
	{
		if (n < 0)
		{
			_putchar('-');
			n = n * -1;
		}
		_putchar(n + '0');
	}
	else if ((n >= 10 && n <= 99) || (n <= -10 && n >= -99))
	{
		if (n < 0)
		{
			_putchar(45);
			n = n * -1;
		}
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if ((n >= 100 && n <= 999) || (n <= -100 && n >= -999))
	{
		if (n < 0)
		{
			_putchar(45);
			n = n * -1;
		}
		_putchar((n / 100) + '0');
		_putchar(((n % 100) / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if ((n >= 1000 && n <= 9999) || (n <= -1000 && n >= -9999))
	{
		if (n < 0)
		{
			_putchar(45);
			n = n * -1;
		}
		_putchar((n / 1000) + '0');
		_putchar(((n % 1000) / 100) + '0');
		_putchar(((n % 100) / 10) + '0');
		_putchar((n % 10) + '0');
	}
}
