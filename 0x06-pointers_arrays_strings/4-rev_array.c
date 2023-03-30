#include "main.h"
/**
 * reverse_array - Functions that reverse the content of an array of integers
 * @a: pointer to array of integer
 * @n: elements of the array
 * Return: reverse array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
