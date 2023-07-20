#include <stdio.h>

/**
 * main - entry point
 *
 * Returns: void
 */
void main(void)
{
	int i;
	unsigned long long int a = 1;
	unsigned long long int b = 2;
	unsigned long long int result = 0;

	for (i = 3; i < 50; i++)
	{
		result = a + b;
		printf(", %lld", result);
		a = b;
		b = result;
	}
	printf("\n");
}

