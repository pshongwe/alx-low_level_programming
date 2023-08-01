/**
 * _strchr - finds a char in a string
 * @s: string
 * @c: char
 * Return: pointer to char in string
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;

		if (i == c)
			return (s - 1);

		if (i == 0)

			return (NULL);
	}
}
