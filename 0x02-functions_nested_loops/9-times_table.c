#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: 9 times table
 */
void times_table(void)
{
	int num, i, multi;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (i = 1; i <= 9; i++)
		{
			_putchar(',');
			_putchar(' ');

			multi = num * i;

			if (multi <= 9)
				_putchar(' ');
			else
				_putchar((multi / 10) + '0');
			_putchar((multi % 10) + '0');
		}
		_putchar('\n');
	}
}
