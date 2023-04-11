#include "main.h"
#include <string.h>
/**
 * *_strdup - Duplicate string to new pointer
 * @str: pointer to string that will be duplicate
 * Return: Duplicated string || NULL
 */
char *_strdup(char *str)
{
	int i;
	int size = strlen(str);
	char *new_str = malloc(size * sizeof(char) + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	if (!new_str)
	{
		free(new_str);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new_str[i] = str[i];
	}
	new_str[i] = '\0';
	return (new_str);
}
