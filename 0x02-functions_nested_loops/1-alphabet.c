#include "main.h"
/**
 * print_alphabet - lowercase, followed by newline
 *
 * Return: void => No return
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
