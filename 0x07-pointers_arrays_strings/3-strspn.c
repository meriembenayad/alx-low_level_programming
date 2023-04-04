#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: sting
 * @accept: number of bytes accepted
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				j++;
				break;
			}
			else if (accept[i + 1] == '\0)
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}
