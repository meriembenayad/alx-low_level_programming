#include "main.h"
/**
 * string_toupper - Changes lowercase char of a string to uppercase.
 * @str: string that should be changed
 * Return: pointer to string in UPPERCASE
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		char ch = str[i];

		if (ch >= 'a' && ch <= 'z')
			str[i] = str[i] + 'A' - 'a';
	}

	return (str);
}
