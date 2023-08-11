/**
 * _strncat - concatenate up to n bytes
 * @dest: string to append to
 * @src: string to append
 * @n: number of bytes
 * Return: resultant string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
return (dest_start);
}
