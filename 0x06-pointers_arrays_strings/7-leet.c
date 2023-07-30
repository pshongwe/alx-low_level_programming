/**
 * leet - leet replacement
 * @str: input string
 * Return: result string
 */
char *leet(char *str)
{
	int i, j;
	char *leetChars;
	char *leetReplacements;

	leetChars = "AEOTL";
	leetReplacements = "43071";
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leetChars[j] != '\0'; j++)
		{
			if (str[i] == leetChars[j] || str[i] == leetChars[j] + 32)
			{
				str[i] = leetReplacements[j];
				break;
			}
		}
	}
	return (str);
}

