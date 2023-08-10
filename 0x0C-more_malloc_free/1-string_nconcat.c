#include <stdlib.h>

int _strlen(char *s);

/**
 * _strlen - returns the lenght of a string
 * @s: string parameter
 *
 * Return: length of the string s
 */
int _strlen(char *s)
{
if (*s != '\0')
return (1 + _strlen(s + 1));
return (0);
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
char *concatenated;
unsigned int len1, len2, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = _strlen(s1);
len2 = _strlen(s2);

if (n >= len2)
n = len2;

concatenated = malloc(len1 + n + 1);
if (concatenated == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concatenated[i] = s1[i];

for (j = 0; j < n; j++, i++)
concatenated[i] = s2[j];

concatenated[i] = '\0';
return (concatenated);
}
