#include <stdio.h>

/**
 * main - entry point
 *
 * Returns: void
 */
void main(void)
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
}

