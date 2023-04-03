#include "main.h"
/**
 * *_memcpy - function that copies memory area.
 * @dest: memory area destination
 * @src: memory area
 * @n: bytes to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
