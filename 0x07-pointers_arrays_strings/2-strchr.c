#include "main.h"
/**
 * *_strchr - function that locates a character in a string.
 * @s: pointer to string
 * @c: string
 * Return: string or NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *s >= '\0'; i++)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
