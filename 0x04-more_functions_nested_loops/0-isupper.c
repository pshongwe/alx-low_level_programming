#include "main.h"

/**
 * _isupper - check if upper case
 * @c: input char
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}
