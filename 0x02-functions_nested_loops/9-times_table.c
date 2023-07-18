#include <stdio.h>
#include "main.h"

/**
 * times_table - times table
 * @n: input number
 * Returns: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j != 9)
			{
				printf("%d, ", (i * j));
			}
			else
			{
				printf("%d\n", (i * j));
			}
		}
	}
}

