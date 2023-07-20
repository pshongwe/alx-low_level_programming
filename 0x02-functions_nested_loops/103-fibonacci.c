#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	long fib1 = 1;
	long fib2 = 2;
	long sum = 0;
	long fib;

	while (fib1 <= 4000000)
	{
		if (fib1 % 2 == 0)
		{
			sum += fib1;
		}
		fib = fib1 + fib2;

		fib1 = fib2;
		fib2 = fib;
	}
	printf("%lu\n", sum);
	return (0);
}

