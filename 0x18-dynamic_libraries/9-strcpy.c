#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination variable
 * @src: source variable
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	dest[0] = '\0';

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
