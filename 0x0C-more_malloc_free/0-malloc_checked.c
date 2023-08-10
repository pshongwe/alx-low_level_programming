#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: input value to allocate
 * Return: void *
 */
void *malloc_checked(unsigned int b)
{
	void *num;

	num = malloc(sizeof(b));
	if (num == NULL)
	{
		exit(98);
	}
	return (num);
}
