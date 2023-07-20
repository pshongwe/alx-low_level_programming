#include <stdio.h>

/**
 * main - entry point
 *
 * Returns: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long long int a = 1;
	unsigned long long int b = 2;
	unsigned long long int result = 0;

	for (i = 3; i < 50; i++)
	{
		result = a + b;
		if ( i != 49)
		{
			printf(", %lld", result);
		}
		else
		{
			printf("%lld\n", result);
		}
		a = b;
		b = result;
	}
}

