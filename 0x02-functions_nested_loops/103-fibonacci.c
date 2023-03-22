#include <stdio.h>
/**
 * main - prints calculate sum of even Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	long int fi1 = 1, fi2 = 2;
	long int nextFi = fi1 + fi2;
	long int sum = 2;

	while (nextFi < 4e6)
	{
		if (nextFi % 2 == 0)
			sum += nextFi;
		fi1 = fi2;
		fi2 = nextFi;
		nextFi = fi1 + fi2;
	}
	printf("%ld\n", sum);

	return (0);
}
