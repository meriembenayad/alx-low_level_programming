#include "main.h"
/**
 * *string_nconcat - concatenates two strings
 * @s1: 1st string to concatenate
 * @s2: 2d string to concatenate
 * @n: size
 * Return: new string || NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len_s1, len_s2, full_len, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;

	if (n > len_s2)
		n = len_s2;

	full_len = len_s1 + n;
	new_str = malloc(full_len * sizeof(char) + 1);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < full_len; i++)
	{
		if (i < len_s1)
			new_str[i] = s1[i];
		else
			new_str[i] = s2[i - len_s1];
	}
	new_str[i] = '\0';

	return (new_str);
}
