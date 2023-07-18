#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers up to the number 98
 *
 * @n: a number
 * Return: void
 */
void print_to_98(int n)
{
	int i;
	
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
