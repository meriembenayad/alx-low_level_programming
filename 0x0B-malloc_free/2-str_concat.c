#include "main.h"
#include <string.h>
/**
 * *str_concat - Concatenates two strings
 * @s1: pointer to 1st string
 * @s2: pointer to 2d string
 * Return: string combine the two string
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i;
	int size_s1, size_s2;
	int full_size;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size_s1 = strlen(s1);
	size_s2 = strlen(s2);
	full_size = size_s1 + size_s2 + 1;

	new_str = malloc(full_size * sizeof(char));

	if (new_str == 0)
	{
		free(new_str);
		return (NULL);
	}

	for (i = 0; i <= full_size; i++)
	{
		if (i < size_s1)
			new_str[i] = s1[i];
		else
			new_str[i] = s2[i - size_s1];
	}
	new_str[i] = '\0';

	return (new_str);
}
