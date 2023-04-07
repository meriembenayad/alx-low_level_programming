#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte
 * @s: pointer to string to copy the character
 * @b: character to copy
 * @n: number of bytes to copy
 * Return: return str
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
