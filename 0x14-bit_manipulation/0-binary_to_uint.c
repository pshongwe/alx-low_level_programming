#include "main.h"

/**
 * binary_to_uint - Converts a binary number to
 * an unsigned int.
 * @b: Pointer to a string containing the binary number.
 * Return: The converted number, or 0 if the string
 * contains invalid characters.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	result = 0;
	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = result * 2 + (*b - '0');
		b++;
	}
	return (result);
}
