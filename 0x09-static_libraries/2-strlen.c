#include "main.h"
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
