#include <unistd.h>
/**
 * _putchar - prints chars
 * @c: char
 * Return: nothing
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

