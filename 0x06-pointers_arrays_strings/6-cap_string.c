#include "main.h"
/**
 * cap_string - capitalizes every single word of a string.
 * @str: string that should be treated
 * Return: string in capitalize all words
 */
char *cap_string(char *str)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			if (i == 0)
			{
				*(str + i) -= 'a' - 'A';
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (sep[j] == *(str + i - 1))
						*(str + i) -= 'a' - 'A';
				}
			}
		}
	}

	return (str);
}
