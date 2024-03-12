#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: The first index where value is located else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t jump = (size_t)sqrt((double)size);
	size_t start = 0;
	size_t end = 0;

	if (!array || size == 0)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return ((int)i);
		start++;
		end = i;
		i = start * jump;
	}
	printf("Value found between indexes [%d] and [%d]\n", (int)start,((int)end) - 1);
	for (; end <= i && end < size; end++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[end] == value)
			return ((int)end);
	}
	return (-1);
}
