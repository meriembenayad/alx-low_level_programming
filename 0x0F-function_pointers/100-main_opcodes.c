#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcodes
 * @argc: numbers of args
 * @argv: array of the args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg1, i;
	char *ptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	arg1 = atoi(argv[1]);
	if (arg1 < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < arg1; i++)
	{
		if (arg1 != 0)
			printf("%02hhx%s", *ptr++, " ");
		else
			printf("\n");
	}
	return (0);
}
