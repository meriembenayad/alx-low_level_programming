#include "lists.h"
/**
 * free_dlistint - Frees a dlistint_t
 * @head: pointer to doubly list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr_node = head;
	dlistint_t *next_node;

	while (curr_node != NULL)
	{
		next_node = curr_node->next;
		free(curr_node);
		curr_node = next_node;
	}
}
