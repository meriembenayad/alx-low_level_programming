#include <unistd.h>
/**
 * main - and that piece of art is useful\" - Dora Korpar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(STDERR_FILENO, quote, sizeof(quote) - 1);
	return (1);
}
