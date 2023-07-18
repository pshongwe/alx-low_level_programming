#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print last digit
 * @n: input number
 * Return: result (Success)
 */
int print_last_digit(int n)
{
	int lastDigit = n > 0 ? n % 10 : (-n) % 10;

	_putchar('0' + lastDigit);
	return (lastDigit % 10);
}
