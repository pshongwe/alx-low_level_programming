#include "main.h"

/**
 * _isalpha - check if char is alphabet
 * @c: a char
 * Return: int
 */
int _isalpha(int c)
{
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
