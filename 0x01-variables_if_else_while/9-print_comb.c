#include <stdio.h>
/**
 * main - Single-Digit Numbers 
 *
 * Return: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 */
int main(void)
{
	int digit;

	/* Numbers separated by , */
	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
		if (digit != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
