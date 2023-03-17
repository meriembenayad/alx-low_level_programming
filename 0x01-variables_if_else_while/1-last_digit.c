#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Random number
 *
 * Return: less than 6, greater than 5, or zero
 */
int main(void)
{
	int n;
	int last_dig;
	
	/* Generate random number n */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Get last digit of n */
	last_dig = n % 10;
	if (last_dig > 0)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, last_dig);
	}
	else if (last_dig < 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dig);
	}
	else
	{
	printf("Last digit of %d is %d and is 0\n", n, last_dig);
	}
	return (0);
}
