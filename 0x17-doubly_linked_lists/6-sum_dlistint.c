#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t
 * @head: pointer to doubly list
 *
 * Return: Sum of data of the list || NULL
 */
int sum_dlistint(dlistint_t *head)
{

	dlistint_t *currr_node = head;
	int sum = 0;

	while (currr_node != NULL)
	{
		sum += currr_node->n;
		currr_node = currr_node->next;
	}

	return (sum);
}
