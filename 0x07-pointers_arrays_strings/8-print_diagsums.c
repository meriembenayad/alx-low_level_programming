#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer to an array of diagonal
 * @size: the size of the diagonal
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_diag1 = 0;
	int sum_diag2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_diag1 += *(a + i * size + i);
		sum_diag2 += *(a + (size - 1 - i) * size + i);
	}

	printf("%d, %d\n", sum_diag1, sum_diag2);
}
