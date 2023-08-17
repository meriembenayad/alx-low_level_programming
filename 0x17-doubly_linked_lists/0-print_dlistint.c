#include "lists.h"
/**
 * printdlistint - Prints all elements of a dlistint_t
 * @dlistint_t: pointer to head of node
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr_node = h;
	size_t count = 0;

	while (curr_node != NULL)
	{
		printf("%d\n", curr_node->n);
		curr_node = curr_node->next;
		count++;
	}

	return (count);
}
