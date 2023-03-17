#include <stdio.h>
/**
 * main - Lowercase Alphabet
 *
 * Return: abcdefghijklmnopqrstuvwxyz
 */
int main(void)
{
	char letter = 'a';

	/* Alphabet in Lowercase */
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
