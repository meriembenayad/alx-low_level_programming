#include "main.h"
/**
 * checks if c is lower
 *
 * Return: 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
