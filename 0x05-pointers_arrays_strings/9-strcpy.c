#include "main.h"
/**
 * *_strcpy - copy string *src to *dest
 * @dest: string that should be pasted
 * @src: string that should be copied
 * Return: dest value
 */
char *_strcpy(char *dest, char *src)
{
	int leng = 0;

	while (src[leng] != '\0')
	{
		dest[leng] = src[leng];
		leng++;
	}
	dest[leng++] = '\0';

	return (dest);
}
