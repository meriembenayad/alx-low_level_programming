#include <stdio.h>
/**
 * main - Lowercase & Uppercase Alphabet
 *
 * Return: abc...ABC...
 */
int main(void)
{
	char low_ch = 'a';
	char up_ch = 'A';

	/* Alphabet in Lowercase */
	while (low_ch <= 'z')
	{
		putchar(low_ch);
		low_ch++;
	}
	while (up_ch <= 'Z')
	{
		putchar(up_ch);
		up_ch++;
	}
	putchar('\n');
	return (0);
}
