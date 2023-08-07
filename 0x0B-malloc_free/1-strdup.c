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
	char *charArray;
	unsigned int i;
	unsigned int n;

	if (str == NULL)
	{
		fprintf(stderr, "\n");
		return (NULL);
	}
	n = strlen(str);
	charArray = malloc((n * sizeof(char)) + 1);
	if (charArray == NULL)
	{
		fprintf(stderr, "Memory allocation failed.\n");
		exit(EXIT_FAILURE);
	}
	i = 0;
	while (str[i] != '\0')
	{
		charArray[i] = str[i];
		i++;
	}
	charArray[i] = '\0';
	return (charArray);
}
