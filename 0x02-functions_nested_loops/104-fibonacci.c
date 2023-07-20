#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Alway 0 (Success)
 */
int main(void) {
	int count = 2;
	long fib1 = 1;
	long fib2 = 2;
	long fib;

	printf("%lu, %lu", fib1, fib2);
	while (count < 98)
	{
		fib = fib1 + fib2;

		printf(", %lu", fib);
		fib1 = fib2;
		fib2 = fib;
		count++;
	}
	printf("\n");
	return (0);
}

