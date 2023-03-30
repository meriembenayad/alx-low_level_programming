#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: pasted string
 * @src: copied string
 * @n: number of bytes to copy
 * Return: pointer to dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (i; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);

}
