#include <stdio.h>
/**
 * main - Lowercase Alphabet \'e\' and \'q\'
 *
 * Return: abcdfghijklmnoprstuvwxyz
 */
int main(void)
{
	char letter = 'a';

	/* Alphabet in Lowercase */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
		putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
