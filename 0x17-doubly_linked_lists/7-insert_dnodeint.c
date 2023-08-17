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
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int i;

	if (h == NULL)
		return (NULL);

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

	new_node->prev = curr_node;
	new_node->next = curr_node->next;

	if (curr_node->next != NULL)
		curr_node->next->prev = new_node;

	curr_node->next = new_node;

	return (new_node);
}
