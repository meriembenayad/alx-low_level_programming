#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 * Return: 0
 */
void rev_string(char *s)
{
	int i, leng = 0;
	char temp;

	while (s[leng] != '\0')
		leng++;

	for (i = 0; i < leng / 2; i++)
	{
		temp = s[i];
		s[i] = s[leng - i - 1];
		s[leng - i - 1] = temp;
	}
}
