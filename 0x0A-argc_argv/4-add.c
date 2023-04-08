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
	int i, j, sum = 0, num;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]) && argv[i][j] != '-')
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		if (num > 0 || num < 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);

	return (0);
}
