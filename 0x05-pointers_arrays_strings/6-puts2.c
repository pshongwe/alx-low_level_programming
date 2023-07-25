#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: input string
 * Return: void
 */

void puts2(char *str)
{
	int count;

	count = 1;
	if (str[0] != '\0')
	{
		_putchar(str[0]);
		while (str[count] != '\0')
		{
			if (count % 2 == 0)
				_putchar(str[count]);
			count++;
		}
	}
	_putchar('\n');
}
