#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char str[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int n = (unsigned int)(sizeof(str) / sizeof(str[0]));

	for (i = 0; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * print_alphabet_x10 - print alphabet 10x
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}
