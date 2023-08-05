#include <stdio.h>

/**
 * main - entry point
 * @argc: length of arg array
 * @argv: arg array
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int add, i, num;
	char *end;

	add = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		num = strtol(argv[i], &end, 10);
		if (*end != '\0')
		{
			printf("Error\n");
			return (1);
		}
		add += num;
	}
	printf("%d\n", add);
	return (0);
}
