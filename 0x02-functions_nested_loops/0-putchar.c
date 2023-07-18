#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[8] = "_putchar";
	int i;
	int n = (unsigned int)(sizeof(str) / sizeof(str[0]));

	for (i = 0; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
