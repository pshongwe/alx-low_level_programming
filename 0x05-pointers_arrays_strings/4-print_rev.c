#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: input string
 * Return: void
 */

void print_rev(char *s)
{
	char j;
	int i, k;

	j = '\0';
	i = 0;

	while (s[i] != j)
		i++;
	for (k = i - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
