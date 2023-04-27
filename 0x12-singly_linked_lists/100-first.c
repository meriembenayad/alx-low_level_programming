#include "lists.h"
void print_before(void) __attribute__((constructor));
/**
 * print_before - function that prints string before main excute
 *
 * Return: void
 */
void print_before(void)
{
	char *str_1 = "You're beat! and yet, you must allow,\n";
	char *str_2 = "I bore my house upon my back!\n";

	printf("%s%s", str_1, str_2);
}
