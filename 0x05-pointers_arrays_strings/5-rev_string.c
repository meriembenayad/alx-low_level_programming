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
	for (i = 0; i < counter; i--)
	{
		rev = s[--i];
		s[i] = s[counter];
		s[counter++] = rev;
	}
}
