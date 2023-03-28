#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	char rev;
	int counter = 0;
	int i;

	while (counter != '\0')
		counter++;
	for (i = counter - 1; i >= counter / 2; i--)
	{
		rev = s[i];
		s[i] = s[counter - i - 1];
		s[counter - i - 1] = rev;
	}
}
