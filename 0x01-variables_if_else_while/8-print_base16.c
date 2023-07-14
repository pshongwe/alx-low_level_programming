#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	for (c = 'a'; c <= 'e'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
