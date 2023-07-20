#include "main.h"

/**
 * largest_number - returns the largest of 3 ints
 * @a: 1st int
 * @b: 2nd int
 * @c: 3rd int
 * Return: largest int
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
