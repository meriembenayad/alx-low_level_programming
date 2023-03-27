/**
 * _strlen - function that returns the length of a string
 * @s: string
 * Return: Lenght of string
 */
int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}

	return (leng);
}
