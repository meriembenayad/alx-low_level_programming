#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _abs - computes the absolute value of an integer
 * @num: the number should be positive
 * Return: number positive
 */
int _abs(int num)
{
	if (num < 0)
		num = num * -1;
	return (num);
}

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

/**
 * _isalpha - checks the alphabetics characters
 * @c: the character should be checked
 * Return: 1 in lower & 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

/**
 * _isdigit - checks for the digits (0 through 9).
 * @c: digit that should be checked
 * Return: 1 in digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/**
 * _islower - checks if character is lower or not
 * @c: the character should be checked
 * Return: 1 in lower & 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

/**
 * _isupper - checks uppercase character.
 * @c: character tht should be checked
 * Return: 1 in Uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

/**
 * *_memcpy - function that copies memory area.
 * @dest: memory area destination
 * @src: memory area
 * @n: bytes to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

/**
 * *_memset - function that fills memory with a constant byte
 * @s: pointer to string to copy the character
 * @b: character to copy
 * @n: number of bytes to copy
 * Return: return str
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}

/**
 * _puts - function that prints a string.
 * @str: string that should be printed
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}

/**
 * _strcat - function that concatenates two strings.
 * @dest: destination string
 * @src: string to appends
 * Return: pointer of the destination string
 */
char *_strcat(char *dest, char *src)
{
	int counter;
	int i;

	counter = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		counter++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[counter + i] = src[i];
	}
	dest[counter + i] = src[i];

	return (dest);
}

/**
 * *_strchr - function that locates a character in a string.
 * @s: pointer to string
 * @c: string
 * Return: string or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
		if (s[i] == c)
			return (s + i);
	return (NULL);
}

/**
 * _strcmp - function that compares two strings.
 * @s1: 1st string to compare.
 * @s2: 2d string to compare.
 * Return: number of difference between two string
 * in case of s1 less than s2, we return negative number
 * in case of s1 greater than s2, the number will be positive
 * in case of the same, we return 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}

/**
 * *_strcpy - copy string *src to *dest
 * @dest: string that should be pasted
 * @src: string that should be copied
 * Return: dest value
 */
char *_strcpy(char *dest, char *src)
{
	int leng = 0;

	while (src[leng] != '\0')
	{
		dest[leng] = src[leng];
		leng++;
	}
	dest[leng++] = '\0';

	return (dest);
}

/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: Lenght of string
 */
int _strlen(char *s)
{
	int leng = 0;

	for (leng = 0; *s != '\0'; s++)
	{
		++leng;
	}

	return (leng);
}

/**
 * _strncat -  Function that concatenates two strings
 * @dest: string destination
 * @src: the string that should be appends
 * @n: number of bytes to concatenate
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int counter;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}

	for (counter = 0; counter < n && src[counter]; counter++)
	{
		dest[i + counter] = src[counter];
	}
	dest[counter + i] = '\0';

	return (dest);
}

/**
 * _strncpy - function that copies a string
 * @dest: pasted string
 * @src: copied string
 * @n: number of bytes to copy
 * Return: pointer to dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer to string
 * @accept: pointer to match string
 * Return: matches string or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
	}

	return (0);
}

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: sting
 * @accept: number of bytes accepted
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}

/**
 * *_strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to 1st occurrence of substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *hay = haystack;
		char *nee = needle;

		while (*hay == *nee && *nee != '\0')
		{
			hay++;
			nee++;
		}

		if (*nee == '\0')
			return (haystack);

		haystack++;
	}

	return (0);
}
