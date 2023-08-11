#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_hexadecimal_with_padding - add padding to hexadecimal
 * @value: input int
 * Return: nothing
 */
void print_hexadecimal_with_padding(unsigned int value)
{
	int padding;
	int shift; 
	int i;
	char digit;

	shift = (padding - 1) * 4;
	padding = 8;
	for (i = 0; i < padding; i++)
	{
		digit = (value >> shift) & 0xF;
		if (digit < 10)
		{
			_putchar('0' + digit);
		}
		else
		{
			_putchar('a' + digit - 10);
		}
		shift -= 4;
	}
}

/**
 * print_buffer - Prints the content of a buffer.
 * @b: Pointer to the buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 * The function prints the content of size bytes of the buffer pointed by b.
 * The output prints 10 bytes per line. Each line starts with the position of
 * the first byte of the line in hexadecimal (8 chars), starting with 0.
 * Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at
 * a time, separated by a space.
 * Each line shows the content of the buffer. If the byte is a printable
 * character, print the letter, if not, print '.'.
 * Each line ends with a new line '\n'.
 * If size is 0 or less, the output should be a new line only '\n'.
 *
 * Example output:
 * 00000000: 48 65 6c 6c 6f 2c 20 77 6f 72 Hello, wor
 * 0000000a: 6c 64 21                      ld!
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int i, j;
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		print_hexadecimal_with_padding(i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				print_hexadecimal_with_padding(b[i + j] & 0xFF);
			else
				_putchar(' ');
			if (j % 2 == 1)
				_putchar(' ');
		}
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (isprint(b[i + j]))
					print_hexadecimal_with_padding(b[i + j]);
				else
					_putchar('.';
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
