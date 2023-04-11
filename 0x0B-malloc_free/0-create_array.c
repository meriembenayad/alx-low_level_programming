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
	char *arr_char = malloc(size);

	if (size == 0 || arr_char == 0)
	{
		return (NULL);
	}
	else
	{
		for (; size > 0; size--)
		{
			arr_char[size] = c;
		}
		return (arr_char);
	}
}
