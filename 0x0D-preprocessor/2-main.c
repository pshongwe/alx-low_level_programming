#include <stdio.h>

void _putchar(char c);

/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char filename[] = __FILE__;
	int i;

	for (i = 0; filename[i] != '\0'; i++)
	{
		_putchar(filename[i]);
	}
	_putchar('\n');
	return (0);
}
