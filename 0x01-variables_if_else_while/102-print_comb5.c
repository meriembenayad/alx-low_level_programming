#include <stdio.h>
/**
 * main - Combinaitions of two two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int dig1, dig2;

	for (dig1 = 0; dig1 < 99; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 < 100; dig2++)
		{
			putchar(dig1 / 10 + '0');
			putchar(dig1 % 10 + '0');
			putchar(' ');
			putchar(dig2 / 10 + '0');
			putchar(dig2 % 10 + '0');
			if (dig1 == 98 && dig2 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
