#include "main.h"
/**
 * _isdigit - checks for the digits (0 through 9).
 * @c: digit that should be checked
 * Return: 1 in digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
