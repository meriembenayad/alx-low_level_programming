#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to the head of listint_t list
 *
 * Return: the elements printed
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->n)
			printf("%d\n", h->n);
		else
			printf("0\n");
		h = h->next;
		count++;
	}
	return (count);
}
