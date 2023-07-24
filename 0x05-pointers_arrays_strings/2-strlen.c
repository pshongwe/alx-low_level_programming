/**
 * stringLength - calculates length of string
 * @s: input string
 * Return: length of string
 */
int stringLength(const char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}

/**
 * _strlen - calculates length of a string
 * @s: pointer to string
 *
 * Return: int length
 */
int _strlen(char *s)
{
	return (stringLength(s));
}
