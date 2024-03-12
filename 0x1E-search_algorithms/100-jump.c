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
	size_t i;
	size_t jump = (size_t)sqrt(size);
	size_t start = 0;
	size_t end = jump;

	if (!array)
		return (-1);

	while (start < size && array[start] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		start = end;
		end += jump;
		if (end > size)
			end = size;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", start, end - 1);
	for (i = start; i < end; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}
	return (-1);
}
