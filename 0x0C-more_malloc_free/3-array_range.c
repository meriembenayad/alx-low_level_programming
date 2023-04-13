#include "main.h"
/**
 * *array_range - function that creates an array of integers.
 * @min: smallest number
 * @max: largest number
 * Return: Array of integer ordered || NULL
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	size = max - min + 1;
	if (min > max)
		return (NULL);

	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
