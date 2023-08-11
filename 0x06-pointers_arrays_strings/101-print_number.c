#include "main.h"

/**
 * print_number - prints a number
 * @n: number to print
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int divisor;
	int temp;
	unsigned int digit;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	divisor = 1;
	temp = n;
	while (temp > 9)
	{
		divisor *= 10;
		temp /= 10;
	}

	while (divisor > 0)
	{
		digit = ((unsigned int) n) / divisor;
		_putchar(digit + '0');
		n %= divisor;
		divisor /= 10;
	}
}
