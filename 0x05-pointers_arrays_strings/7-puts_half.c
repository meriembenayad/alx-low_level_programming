#include "main.h"
/**
 * puts_half - function that prints half of a string.
 * @str: string should be printed
 * Return: 0
 */
void puts_half(char *str)
{
	int i = 1;

	while (str[i])
		i++;

	i /= 2;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
