#include "main.h"
/**
 * print_diagonal - draws a diagonal line of n
 * @n: number of diagonal printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;

	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n < 1)
	{
		_putchar('\n');
	}
}
