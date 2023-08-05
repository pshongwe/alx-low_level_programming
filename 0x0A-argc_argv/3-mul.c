#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: length of arg array
 * @argv: arg array
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
