#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;
	long n1, n2, temp;

	n1 = 0;
	n2 = 1;

	for (i = 0; i < 50; i++)
	{
		temp = n1 + n2;
		n1 = n2;
		n2 = temp;
		printf("%ld", temp);
		if (i < 49)
		{
			printf(", ");
		}
	}
	putchar('\n');

	return (0);
}
