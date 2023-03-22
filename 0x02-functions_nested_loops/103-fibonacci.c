#include <stdio.h>
/**
 * main - prints calculate sum of even Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;
	long n1, n2, temp, sum;

	n1 = 0;
	n2 = 1;

	while (temp < 4000000)
	{
		temp = n1 + n2;
		n1 = n2;
		n2 = temp;

		if (temp > 4000000)
			break;

		if (temp % 2 == 0)
			sum += temp;
	}
	printf("%ld\n", sum);

	return (0);
}
