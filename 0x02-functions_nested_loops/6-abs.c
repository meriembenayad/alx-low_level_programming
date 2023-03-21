#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @num: the number should be positive
 * Return: number positive
 */
int _abs(int num)
{
	if (num < 0)
		num = num * -1;
	return (num);
}
