#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char status[30];
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (n > 5)
	{
		strcpy(status, "and is greater than 5");
	}
	else if (n == 0)
	{
		strcpy(status, "and is 0");
	}
	else
	{
		strcpy(status, "and is less than 6 and not 0");
	}
	printf("Last digit of %d is %d %s",
	n, digit, status);
	return (0);
}
