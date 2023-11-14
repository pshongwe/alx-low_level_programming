#include "main.h"

/**
 * _abs - print magnitude
 * @n: input number
 * Return: result (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		int temp = n * (-1);

		return (temp);
	}
	else
	{
		return (n);
	}
}
