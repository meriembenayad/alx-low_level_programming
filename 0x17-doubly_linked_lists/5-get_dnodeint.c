#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t
 * @head: pointer to head of doubly list
 * @index: index of node
 *
 * Return: The nth of node|| NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr_node = head;
	unsigned int i = 0;

	while (curr_node != NULL)
	{
		if (i == index)
			return (curr_node);

		curr_node = curr_node->next;
		i++;
	}

	return (NULL);
}
