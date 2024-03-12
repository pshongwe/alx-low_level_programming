#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - search for target value in a sorted array
 * @array: sorted array
 * @size: size of array
 * @value: target int
 * Return: index if found else -1
 */
int binary_search(int *array, size_t size, int value)
{
	int median;
	int left = 0, right = size - 1;

	if (array == NULL)
		return (-1);
	do {
		print_array(array + left, right - left + 1);
		median = (left + right) / 2;
		if (array[median] < value)
			left = median + 1;
		else if (array[median] > value)
			right = median - 1;
		else
			return (median);
	} while (left <= right);
	return (-1);
}

/**
 * print_array - Prints an array of integers
 * @array: The array to print
 * @size: The size of the array
 */
void print_array(int *array, size_t size)
{
    size_t i;

    printf("Searching in array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("\n");
}
