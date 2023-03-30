#include "main.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: 1st string to compare.
 * @s2: 2d string to compare.
 * Return: number of difference between two string
 * in case of s1 less than s2, we return negative number
 * in case of s1 greater than s2, the number will be positive
 * in case of the same, we return 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
