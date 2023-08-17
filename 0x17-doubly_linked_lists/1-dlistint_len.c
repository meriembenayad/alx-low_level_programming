#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t
 * @h: pointer to head of doubly list
 *
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr_node = h;
	size_t count = 0;

	while (curr_node != NULL)
	{
		curr_node = curr_node->next;
		count++;
	}

	return (count);
}
