#include "main.h"
/**
 * puts_half - function that prints half of a string.
 * @str: string should be printed
 * Return: 0
 */
void puts_half(char *str)
{
	int leng = 0;

	while (*str != '\0')
	{
		leng++;
		str++;
	}

	str -= (leng / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
