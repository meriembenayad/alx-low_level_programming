#include <stdio.h>
/**
 * main - Numbers of base 10
 *
 * Return: 0123456789
 */
int main(void)
{
	int number = 0;

	/* Numbers of base 10 */
	while (number <= 9)
	{
		printf("%d", number);
		number++;
	}
	printf("\n");
	return (0);
}
