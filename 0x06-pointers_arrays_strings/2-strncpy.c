/**
 * _strncat - copy n bytes
 * @dest: string to copy to
 * @src: string to copy
 * @n: number of bytes
 * Return: resultant string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (dest_start);
}

