#include "variadic_functions.h"
/**
 * sum_them_all - function returns sum of all the parameter
 * @n: integer
 * Return: sum || 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);
	unsigned int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
