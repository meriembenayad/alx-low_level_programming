#include "main.h"
/**
 * *create_array - create an array of chars
 *			and initialize it with specific char.
 * @size: size of the array
 * @c: character
 * Return: poiter to array || NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr_char;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	arr_char = malloc(size);
	if (!arr_char)
	{
		free(arr_char);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		arr_char[i] = c;

	return (arr_char);
}
