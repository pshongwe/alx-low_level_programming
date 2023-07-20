#include <stdio.h>

/**
 * main - entry point
 *
 * Returns: Always 0 (Success)
 */
int main(void)
{
	int i;
	int result = 0;

	for (i = 0; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			result += i;
		}
	}
	printf("%d\n", result);
	return (0);
}

