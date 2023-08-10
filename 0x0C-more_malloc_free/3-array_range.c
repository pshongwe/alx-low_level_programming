#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value (included).
 * @max: The maximum value (included).
 *
 * Return: A pointer to the newly created array, or NULL on failure.
 */
int *array_range(int min, int max)
{
int *arr;
int i, size, value;

if (min > max)
return (NULL);

size = max - min + 1;
arr = malloc(size * sizeof(int));

if (arr == NULL)
return (NULL);

value = min;
for (i = 0; i < size; i++, value++)
arr[i] = value;

return (arr);
}
