#include "lists.h"
/**
 * free_listint - Function that frees list_t
 * @head: pointer to the head of list_t
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
