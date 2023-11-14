/**
 * _memset - fills memory with constant char
 * @s: pointer to by s
 * @b: constant char
 * @n: number of bytes to fill
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
