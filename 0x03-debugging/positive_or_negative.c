#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - Entry point
 * @n: input int
 * Return: void
 */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
}
