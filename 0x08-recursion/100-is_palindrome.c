#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @str: The string to be checked.
 * @start: The starting index of the string.
 * @end: The ending index of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int check_palindrome(char *str, int start, int end)
{
	if (str[start] != str[end])
		return (0);

	if (start >= end)
		return (1);

	return (check_palindrome(str, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len == 0 || len == 1)
		return (1);

	return (check_palindrome(s, 0, len - 1));
}
