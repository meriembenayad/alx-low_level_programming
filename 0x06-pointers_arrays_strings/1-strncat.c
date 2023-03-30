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
	int counter;
	int i;

	counter = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		counter++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[counter + i] = src[i];

	}
	dest[counter + i] = src[i];

	return (dest);
}
