#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array of ints
 * @n: number of ints to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (i == 0)
			printf("%d", a[0]);
		else
			printf(", %d", a[i]);
		i++;
	}
	putchar('\n');
}
