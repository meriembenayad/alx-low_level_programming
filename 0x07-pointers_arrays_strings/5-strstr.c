#include "main.h"
/**
 * *_strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to 1st occurrence of substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *hay = haystack;
		char *nee = needle;

		while (*hay == *nee && *nee != '\0')
		{
			hay++;
			nee++;
		}


		if (*nee == '\0')
			return (haystack);

		haystack++;
	}

	return (0);
}
