#include "main.h"

/**
 * print_diagonal - print \ followed by $ based on input n
 * @n: int
 * Return: void
 */
void print_diagonal(int n)
{
	int i, count;

	count = 0;
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n > 0)
		{
			for (i = 0; i < count; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			count++;
			n--;
		}
		_putchar('\n');
	}
}
