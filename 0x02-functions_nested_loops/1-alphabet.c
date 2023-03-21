#include "main.h"
/**
 * main: print_alphabet in lowercase
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
