/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, i, check, count;

	count = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		check = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == s[j])
			{
				count++;
				check = 1;
			}
		}
		if (check == 0)
			return (count);
		else if (s[j + 1] == '\0' && check == 1)
			return (count);
	}
	return (0);
}
