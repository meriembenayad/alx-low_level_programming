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
	unsigned int i;
	char *arr_char = malloc(size);

	if (size == 0 || arr_char == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; size++)
		{
			arr_char[i] = c;
		}
		return (arr_char);
	}
}
