#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates string
 * @str: string to duplicate
 * Return: string copy
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i;
	unsigned int n;

	if (str == NULL)
	{
		return (NULL);
	}
	n = strlen(str) + 1;
	copy = malloc(n * sizeof(char));
	if (copy == NULL)
	{
		fprintf(stderr, "Memory allocation failed.\n");
		exit(EXIT_FAILURE);
	}
	i = 0;
	while (str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
