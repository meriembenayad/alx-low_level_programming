#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: destination string
 * @src: string to appends
 * Return: pointer of the destination string
 */
char *_strcat(char *dest, char *src)
{
	int counter;
	int i;

	counter = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		counter++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[counter + i] = src[i];
	}
	dest[counter + i] = src[i];

	return (dest);

}
