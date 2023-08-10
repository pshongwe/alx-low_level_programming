#include <stdlib.h>
#include <string.h>

char *_strncat(char *dest, char *src, int n);

/**
 * _strncat - concatenate up to n bytes
 * @dest: string to append to
 * @src: string to append
 * @n: number of bytes
 * Return: resultant string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
return (dest_start);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: If n is greater or equal to the
 * length of s2 then use the entire string s2
 * Return: char array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	unsigned int final_len = len1 + ((n >= len2) ? len2 : n);
	char *result = malloc(final_len + 1);

	if (result == NULL)
	{
		exit(EXIT_FAILURE);
	}
	strncpy(result, s1, len1);
	_strncat(result, s2, final_len - len1);
	result[final_len] = '\0';
	return (result);
}
