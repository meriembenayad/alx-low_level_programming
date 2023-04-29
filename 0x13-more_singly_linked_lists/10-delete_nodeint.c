#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: pointer to the pointer to the head
 * @index: index of the node should be deleted
 * Return: 1 || -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	unsigned int count;
	listint_t *prev = NULL;

	while (current != NULL && count < index)
	{
		prev = current;
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (-1);

	if (prev == NULL)
	{
		*head = current->next;
		free(current);
	}
	else
	{
		prev->next = current->next;
		free(current);
	}

	return (1);
}
