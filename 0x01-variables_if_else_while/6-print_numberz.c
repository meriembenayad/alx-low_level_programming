#include <stdio.h>
/**
 * main - Numbers of base 10
 *
 * Description: By using putchar()
 *
 * Return: 0123456789
 */
int main(void)
{
	int number = 0;
	int ascii_num = number + '0';

	/* Numbers of base 10 */
	while (ascii_num <= '9')
	{
		putchar(ascii_num);
		ascii_num++;
	}
	putchar('\n');
	return (0);
}
