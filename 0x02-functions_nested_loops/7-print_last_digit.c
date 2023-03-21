#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @num: should be checked if it contain more than 1 digit
 * Return: value of the last digit
 */
int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;
	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + 48);

	return (last_digit);
}
