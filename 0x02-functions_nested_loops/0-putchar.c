#include "main.h"
/**
 * main - prints _putchar character.
 *
 * Return: 0
 */
int main(void)
{
	char put_var[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(put_var[i]);
	_putchar('\n');

	return 0;
}
