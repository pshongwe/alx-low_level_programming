#include "main.h"

/**
 * print_triangle - prints triangle using #
 * @size: input size
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		i = 1;
		while (i <= size)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			i++;
			_putchar('\n');
		}
	}
}
