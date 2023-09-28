#include "main.h"

/**
 * get_endianness - get the endiannes of the arch
 * Return: 1 for little indian, 0 for big indian.
 */
int get_endianness(void)
{
	unsigned int num;
	char *c;

	num = 1;
	c = (char *)&num;
	if (*c)
		return (1);
	else
		return (0);
}
