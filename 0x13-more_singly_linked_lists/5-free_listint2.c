#include "lists.h"
/**
 * free_listint2 - Frees a listint_t list
 * @head: pointer to the pointer to the head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		node = *head;
		*head = node->next;
		free(node);
	}

	*head = NULL;
}
