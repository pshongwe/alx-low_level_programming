#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: The number of arguments
 * @av: Array of arguments
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
int total_length, pos, i, j;
char *result;

if (ac <= 0 || av == NULL)
return (NULL);
total_length = 0;
for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j] != '\0'; j++)
	{
		total_length++;
	}
}
result = malloc(total_length + ac + 1);
if (result == NULL)
return (NULL);
pos = 0;
for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j] != '\0'; j++)
	{
		result[pos++] = av[i][j];
	}
	result[pos++] = '\n';
}
result[pos] = '\0';
return (result);
}
