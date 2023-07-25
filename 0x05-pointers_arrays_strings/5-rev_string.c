#include "main.h"

/**
 * rev_string - reverse a string
 * @s: input string
 * Return: void
 */

void rev_string(char *s)
{
	char j, temp;
	int i, k, len;

	j = '\0';
	i = 0;
	len = 0;

	while (s[i] != j)
		i++;
	len = i - 1;
	for (k = 0; k < i / 2; k++)
	{
		temp = s[k];
		s[k] = s[len];
		s[len--] = temp;
	}
}
