#include "main.h"
/**
 * print_alphabet - x10 in lowercase, followed by newline
 *
 * Return: void => No return
 */
void print_alphabet_x10(void)
{
	int rep = 0;

	while (rep <= 10)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		rep++;
	}	
}
