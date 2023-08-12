#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int _is_digit(char *s);
void print_number(int num);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * _strlen - returns the lenght of a string
 * @s: string parameter
 *
 * Return: length of the string s
 */
int _strlen(char *s)
{
if (*s != '\0')
return (1 + _strlen(s + 1));
return (0);
}
/**
 * _is_digit - checks if a string contains only digits
 * @s: input string
 * Return: 1 if all characters are digits, 0 otherwise
 */
int _is_digit(char *s)
{
while (*s)
{
if (!isdigit(*s))
return (0);
s++;
}
return (1);
}

/**
 * print_number - prints a number using putchar
 * @num: number to print
 */
void print_number(int num)
{
if (num / 10)
print_number(num / 10);
_putchar(num % 10 + '0');
}

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination variable
 * @src: source variable
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	dest[0] = '\0';
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * print_error - prints Error
 * Return: nothing
 */
void print_error(void)
{
int i;
char error[6];

_strcpy(error, "Error");
	for (i = 0; error[i] != '\0'; i++)
	{
		_putchar(error[i]);
	}
	_putchar('\n');
}

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
int i, j, product, len1, len2, total_len, non_zero_index;
int *result;
char *num1, *num2;

if (argc != 3 || !_is_digit(argv[1]) || !_is_digit(argv[2]))
{
print_error();
	return (98);
}

num1 = argv[1];
num2 = argv[2];
len1 = _strlen(num1);
len2 = _strlen(num2);
total_len = len1 + len2;
result = malloc(total_len *sizeof(int));

if (!result)
{
	print_error();
return (98);
}

for (i = 0; i < total_len; i++)
result[i] = 0;

for (i = len1 - 1; i >= 0; i--)
{
for (j = len2 - 1; j >= 0; j--)
{
product = (num1[i] - '0') * (num2[j] - '0');
result[i + j + 1] += product;
if (result[i + j + 1] > 9)
{
result[i + j] += result[i + j + 1] / 10;
result[i + j + 1] %= 10;
}
}
}

non_zero_index = 0;
while (non_zero_index < total_len && result[non_zero_index] == 0)
non_zero_index++;

if (non_zero_index == total_len)
_putchar('0');
for (; non_zero_index < total_len; non_zero_index++)
_putchar(result[non_zero_index] + '0');
_putchar('\n');

free(result);
return (0);
}
