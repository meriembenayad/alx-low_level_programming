#include <stdio.h>
/**
 * main - Hexadecimal in lowercase
 *
 * Return: 0123456789abcdef
 */
int main(void)
{
	int hexa_num;

	/* Hexadecimal in Lowercase */
	for (hexa_num = 0; hexa_num < 16; hexa_num++)
	{
		if (hexa_num < 10)
		{
		putchar(hexa_num + '0');
		}
		else
		{
		putchar(hexa_num - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
}
