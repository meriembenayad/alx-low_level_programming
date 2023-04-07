#include "main.h"
/**
 * _isupper - checks uppercase character.
 * @c: character tht should be checked
 * Return: 1 in Uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
