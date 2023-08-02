#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string parameter
 *
 * Return: length of the string s
 */

int _strlen_recursion(char *s)
{
if (*s != '\0')
return (1 + _strlen_recursion(s += 1));
return (0);
}

/**
 * is_palindrome_recursive - recursive helper function
 * @s: the string
 * @start: starting index
 * @end: ending index
 *
 * Return: 1 if the string is a palindrome, 0 if not
 *
 */

int is_palindrome_recursive(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: the string
 *
 * Return: 1 if the string is a palindrome and 0 if not.
 *
 */

int is_palindrome(char *s)
{
int len;

len = _strlen_recursion(s);
return (is_palindrome_recursive(s, 0, len - 1));
}
