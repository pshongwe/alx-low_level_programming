/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 *
 * Return: resultant string
 */
char *cap_string(char *str)
{
	int capitalize_next, i;
	char c;

	capitalize_next = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		if (isspace(c) || c == ',' || c == ';' || c == '.' || c == '!' ||
		c == '?' || c == '"' || c == '(' || c == ')' || c == '{' || c == '}')
		{
			capitalize_next = 1;
		}
		else if (capitalize_next)
		{
			str[i] = toupper(c);
			capitalize_next = 0;
		}
	}
	return (str);
}
