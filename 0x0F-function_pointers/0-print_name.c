#include "function_pointers.h"
/**
 * print_name - function that prints a name.
 * @name: string
 * @f: pointer function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{

	if (!name || !f || !*name)
		return;

	f(name);

}
