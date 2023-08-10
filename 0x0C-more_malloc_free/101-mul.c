#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int _isdigit(char *s);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
	
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
 * _isdigit - checks if a string is composed of digits
 * @s: string to check
 * Return: 1 if composed of digits, 0 otherwise
 */
int _isdigit(char *s)
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
 * _strlen - calculates the length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
int len = 0;
while (*s)
{
len++;
s++;
}
return (len);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
char *num1;
char *num2;
char error[6];
int len1;
int len2;
int result_len;
int *result;
int i, j, product, pos1, pos2, sum, start;

num1 = argv[1];
num2 = argv[2];
len1 = _strlen(num1);
len2 = _strlen(num2);
result_len = len1 + len2;
result = malloc(result_len *sizeof(int));
_strcpy(error, "Error");
if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
{
for (i = 0; error[i] != '\0'; i++)
{
_putchar('0' + error[i]);
}
_putchar('\n');
	return (98);
}
if (result == NULL)
{
for (i = 0; error[i] != '\0'; i++)
{
	_putchar('0' + error[i]);
}
_putchar('\n');
return (98);
}

for (i = 0; i < result_len; i++)
result[i] = 0;

for (i = len1 - 1; i >= 0; i--)
{
for (j = len2 - 1; j >= 0; j--)
{
product = (num1[i] - '0') * (num2[j] - '0');
pos1 = i + j;
pos2 = i + j + 1;
sum = product + result[pos2];
result[pos1] += sum / 10;
result[pos2] = sum % 10;
}
}

start = 0;
while (start < result_len && result[start] == 0)
start++;

if (start == result_len)
{
_putchar('0');
_putchar('\n');
}
else
{
for (; start < result_len; start++)
_putchar('0' + result[start]);
_putchar('\n');
}

free(result);
return (0);
}
