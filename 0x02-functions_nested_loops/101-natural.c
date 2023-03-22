#include <stdio.h>
/**
 * main - the sum of multiples of 3, 5, 6 & 9
 *
 * Return: 0
 */
int main()
{
	int n, sum;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
}
