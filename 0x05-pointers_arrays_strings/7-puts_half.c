#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: string to printed
 * Return: 0
 */
void puts_half(char *str)
{
	int i;

	while (str[i] != '\0')
		i++;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i - 1]);
	}
	_putchar('\n');
}
