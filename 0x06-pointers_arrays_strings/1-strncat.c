#include "main.h"
/**
 * _strncat -  Function that concatenates two strings
 * @dest: string destination
 * @src: the string that should be appends
 * @n: number of bytes to concatenate
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int counter;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}

	for (counter = 0; counter < n && src[counter]; counter++)
	{
		dest[i + counter] = src[counter];

	}
	dest[counter + i] = '\0';

	return (dest);
}
