/**
 * rot13 - encode string using rot13
 * @str: input string
 * Return: result string
 */
char *rot13(char *str)
{
	char *found;
	char *input;
	char *output;

	input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (int i = 0; str[i] != '\0'; i++)
	{
		found = strchr(input, str[i]);
		if (found)
		{
			str[i] = output[found - input];
		}
	}
	return (str);
}
