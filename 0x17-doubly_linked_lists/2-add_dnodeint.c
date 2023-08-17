#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t
 * @head: pointer to a pointer to head of doubly list
 * @n: value in the node
 *
 * Return: Address of new element || NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
