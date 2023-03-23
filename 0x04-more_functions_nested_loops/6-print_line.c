#include "main.h"
/**
 * print_line - draws a straight line
 * @n: number of times the charcter should be printed
 * Return: n > 0 -> straight line / n <= 0 -> newline
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
