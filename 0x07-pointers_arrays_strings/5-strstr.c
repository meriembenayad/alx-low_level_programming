#include "main.h"
/**
 * _strlen - function that count the length of string
 * @s: string to be calculate its length
 * Return: the length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		*s++;
	}
	return (i);
}
/**
 * *_strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to 1st occurrence of substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int needle_len = 0;
	int first_occur = 0;
	needle_len = _strlen(needle);

	while (*haystack && *needle)
	{
		if (*haystack != *needle)
		{
			needle -= first_occur;
			haystack -= (first_occur - 1);
			first_occur = 0;
			continue;
		}
		haystack++;
		needle++;
		first_occur++;
		if (first_occur == needle_len)
			break;
	}
	if (first_occur == needle_len)
		return (haystack - first_occur);

	return (0);
}
