#include <stdlib.h>

int count_words(char *str);

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings containing the words.
 *         The last element of the array is NULL.
 */
char **strtow(char *str)
{
int i, j, k, len;
char **array;

if (str == NULL || *str == '\0')
return (NULL);
len = count_words(str);
if (len == 0)
return (NULL);
array = malloc(sizeof(char *) * (len + 1));
if (array == NULL)
return (NULL);

for (i = 0; i < len; i++)
{
	while (*str == ' ')
		str++;
	for (j = 0; str[j] != ' ' && str[j] != '\0'; j++)
		;
	array[i] = malloc(sizeof(char) * (j + 1));
	if (array[i] == NULL)
	{
		for (k = 0; k < i; k++)
			free(array[k]);
		free(array);
		return (NULL);
	}
	for (j = 0; *str != ' ' && *str != '\0'; j++, str++)
		array[i][j] = *str;
	array[i][j] = '\0';
}
array[i] = NULL;
return (array);
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
int i, count, word;

count = 0;
word = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && word == 0)
{
count++;
word = 1;
}
if (str[i] == ' ')
word = 0;
}
return (count);
}
