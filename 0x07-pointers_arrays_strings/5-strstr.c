#include <stdio.h>

/**
 * _strstr - finds a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning of the substring found
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (haystack[i + j] != needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
