/**
 * swap_int - function that swaps the values of two integers
 * @a: first digit
 * @b: second digit
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
