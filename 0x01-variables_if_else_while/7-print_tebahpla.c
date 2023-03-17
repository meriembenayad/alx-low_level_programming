#include <stdio.h>
/**
 * main - Lowercase Alphabet in reverse
 *
 * Return: zyxwvutsrqponmlkjihgfedcba
 */
int main(void)
{
	char letter = 'z';

	/* Alphabet in Lowercase */
	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
