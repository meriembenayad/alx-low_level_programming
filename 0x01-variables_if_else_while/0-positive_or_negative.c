#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Random number
 *
 * Description: n store a different number everytime the program run
 */
int main(void)
{
	int n;

	/* Generate random number n */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
	printf("%d is negative\n", n);
	} else if (n > 0)
	{
	printf("%d is positive\n", n);
	} else
	{
	printf("%d is zero\n", n);
	}
	return (0);
}
