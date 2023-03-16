#include <unistd.h>
/**
 * main - and that piece of art is useful\" - Dora Korpar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char qte[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, qte, sizeof(qte) - 1);
	return (1);
}
