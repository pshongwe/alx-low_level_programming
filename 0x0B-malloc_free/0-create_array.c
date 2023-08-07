#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: char to initialize with
 * Return: char array
 */
char *create_array(unsigned int size, char c)
{
	char *charArray;
	unsigned int i;

	if (size == 0)
		return (NULL);
	charArray = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		charArray[i] = c;
	}
	return (charArray);
}
