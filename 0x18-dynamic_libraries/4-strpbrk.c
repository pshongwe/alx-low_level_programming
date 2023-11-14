#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: bytes
 * Return: pointer to byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, check;

	check = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				check = 1;
				return (s + i);
			}
		}
	if (s[i] == '\0' && check == 0)
		return (NULL);
	}
	return (0);
}
