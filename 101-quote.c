#include <unistd.h>
/**
 * main - and that piece of art is useful\" - Dora Korpar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char sentence[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(STDERR_FILENO, sentence, sizeof(sentence) - 1);
	return (1);
}
