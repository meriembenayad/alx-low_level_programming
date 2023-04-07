#include <stdio.h>
/**
 * _atoi - Function that convert a string to an integer
 * @s: string to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (!(s[i] >= '0' && s[i] <= '9') && s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	if (sign == -1)
	{
		while (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 - (s[i] - 48);
			i++;
		}
	}
	else
	{
		while (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - 48);
			i++;
		}
	}
	return (result);
}
