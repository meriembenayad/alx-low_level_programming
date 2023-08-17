#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t
 * @head: pointer to a pointer to the head
 * @index: index of node
 *
 * Return: 1 || -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr_node = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if ((*head)->next != NULL)
			(*head)->prev = NULL;
		free(curr_node);
		return (1);
	}

	while (i < index && curr_node != NULL)
	{
		curr_node = curr_node->next;
		i++;
	}

	if (curr_node == NULL)
		return (-1);

	if (curr_node->next != NULL)
		curr_node->next->prev = curr_node->prev;

	if (curr_node->prev != NULL)
		curr_node->prev->next = curr_node->next;

	free(curr_node);

	return (1);
}
