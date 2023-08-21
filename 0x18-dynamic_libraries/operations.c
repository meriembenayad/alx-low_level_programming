#include <stdio.h>
/**
 * add - Add two number
 * @num1: first integer
 * @num2: second integer
 *
 * Return: Addition of NUM1 + NUM2
 */
int add(int num1, int num2)
{
	return (num1 + num2);
}

/**
 * sub - Substruct two number
 * @num1: first integer
 * @num2: second integer
 *
 * Return: Substruction of NUM1 - NUM2
 */
int sub(int num1, int num2)
{
	return (num1 - num2);
}

/**
 * mul - Multiply two number
 * @num1: first integer
 * @num2: second integer
 *
 * Return: Multiplication of NUM1 * NUM2
 */
int mul(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * div - Divise two number
 * @num1: first integer
 * @num2: second integer
 *
 * Return: Division of NUM1 / NUM2
 */
int div(int num1, int num2)
{
	if (num2 != 0)
		return (num1 / num2);
	else
		return (0);
}

/**
 * mod - Calculate reminder of divison of two number
 * @num1: first integer
 * @num2: second integer
 *
 * Return: Modulo of NUM1 % NUM2
 */
int mod(int num1, int num2)
{
	if (num2 != 0)
		return (num1 % num2);
	else
		return (0);
}
