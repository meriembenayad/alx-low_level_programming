#include "main.h"
/**
 * _strlen - return length of the string
 * @s: pointer to a string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	if (*s > '\0')
		len += _strlen(s + 1) + 1;

	return (len);
}
/**
 * check_palindrome - check if the string is plandrome or not
 * @str: string
 * @left: first character in the string
 * @right: the last character of the string
 * Return: 1 if the string is palindrome 0 if not
 */
int check_palindrome(char *str, int left, int right)
{
	if (left >= right)
		return (1);
	else if (str[left] == str[right])
		return (check_palindrome(str, left + 1, right - 1));
	else
		return (0);
}
/**
 * is_palindrome - call function check palindrome
 * @s: pointer to string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (check_palindrome(s, 0, len - 1));
}
