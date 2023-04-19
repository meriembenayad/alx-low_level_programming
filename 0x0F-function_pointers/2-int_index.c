#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function search for an integer
 * @array: array
 * @size: size of the array
 * @cmp: function pointer
 * Return: index of integer || -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, *end = array + size - 1;

	if (array != 0 && size > 0 && cmp != 0)
	{
		for (i = 0; array <= end; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	else
	{
		return (-1);
	}
}
