#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long a = 1;
	long b = 2;
	long result = 0;

	printf("%lu, %lu", a, b);
	for (i = 2; i < 50; i++)
	{
		result = a + b;
		if (i != 50)
		{
			printf(", %lu", result);
		}
		a = b;
		b = result;
	}
	printf("\n");
	return (0);
}

