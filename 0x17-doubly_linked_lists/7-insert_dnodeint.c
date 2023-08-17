#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: pointer to a pinter to the head
 * @idx: index of the node
 * @n: value of the node
 *
 * Return: Address of the new node || NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr_node = *h;
	dlistint_t *next_node;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (i < idx - 1 && curr_node != NULL)
	{
		curr_node = curr_node->next;
		i++;
	}

	if (curr_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	next_node = curr_node->next;
	new_node->prev = curr_node;
	new_node->next = next_node;
	curr_node->next = new_node;

	if (next_node != NULL)
		next_node->prev = new_node;

	return (new_node);
}
