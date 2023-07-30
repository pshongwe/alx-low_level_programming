/**
 * string_toupper - convert string to upper case
 * @str: string input
 *
 * Return: upper case string
 */
char *string_toupper(char *str)
{
	char *ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}
	return (str);
}
