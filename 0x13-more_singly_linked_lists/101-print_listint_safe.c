#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t list
 * @head: pointer to the head of node
 * Return: number of nodes list || 98
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		if ((void *)head->next <= (void *)head)
		{
			printf("->[%p] %d\n", (void *)head, head->n);
			exit(98);
		}
		head = head->next;
	}

	return (count);
}
