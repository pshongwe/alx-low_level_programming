#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it with zeros.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *allocated_memory;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
allocated_memory = malloc(nmemb * size);
if (allocated_memory == NULL)
return (NULL);
for (i = 0; i < nmemb * size; i++)
*((char *)allocated_memory + i) = 0;

return (allocated_memory);
}
