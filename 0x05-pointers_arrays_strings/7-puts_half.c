#include "main.h"

/**
 * puts_half - that prints half of a string
 * @str: input string
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, len, n;

	i = 0;

	while (str[i] != '\0')
		i++;

	len = i;

	if ((len % 2) != 0)
	{
		n = (len - 1) / 2;
		for (j = n + 1; j < len; j++)
			_putchar(str[j]);
	}
	else
	{
		n = (len / 2);
		for (j = n; str[j] != '\0'; j++)
			_putchar(str[j]);
	}

	_putchar('\n');
}
