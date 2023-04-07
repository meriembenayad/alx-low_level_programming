#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: counter of args
 * @argv: pointer to array of args
 * Return: all args
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
