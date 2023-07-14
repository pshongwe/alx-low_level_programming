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
	int i, j;

	for (i = 0; i < 100; i++)
	{
		int i_first_digit = i / 10;
		int i_second_digit = i % 10;

		for (j = i; j < 100; j++)
		{
			int j_first_digit = j / 10;
			int j_second_digit = j % 10;

			if (i != j)
			{
				putchar('0' + i_first_digit);
				putchar('0' + i_second_digit);
				putchar(' ');
				putchar('0' + j_first_digit);
				putchar('0' + j_second_digit);

				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
