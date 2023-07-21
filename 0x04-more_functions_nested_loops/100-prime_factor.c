#include <stdio.h>

/**
 * largestPrimeFactor - function to find largest prime factor
 * @number: input number
 * Return: long
 */
long largestPrimeFactor(long number)
{
	long largestFactor = 0;
	long factor;

	largestFactor = 0;
	factor = 2;
	while (number > 1)
	{
		if (number % factor == 0)
		{
			largestFactor = (factor > largestFactor) ? factor : largestFactor;
			while (number % factor == 0)
			{
				number /= factor;
			}
		}
	factor++;
	}
	return (largestFactor);
}

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long number;
	long largestFactor;

	number = 612852475143;
	largestFactor = largestPrimeFactor(number);
	printf("%lu\n", largestFactor);
	return (0);
}

