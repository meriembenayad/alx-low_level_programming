#include "main.h"
/**
 * print_number - function that prints an integer.
 * @n: number should be treated
 * Return: void
 */
void print_number(int n)
{
	unsigned int num = n;
	int opr = 1;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}

	while (num / opr >= 10)
	{
		opr = opr * 10;
	}

	while (opr >= 1)
	{
		_putchar('0' + num / opr);
		num = num % opr;
		opr = opr / 10;
	}

}
