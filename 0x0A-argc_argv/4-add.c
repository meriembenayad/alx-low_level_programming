#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: counter of args
 * @argv: pointer to array of args
 * Return: addition result || Error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!(isdigit(*argv[i])) && *argv[i] != '-')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}

	printf("%d\n", sum);

	return (0);
}
