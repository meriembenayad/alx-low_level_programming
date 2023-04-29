#include "lists.h"
/**
 * add_nodeint_end - Function that adds a new node at the end of a listint_t
 * @head: pointer to the head of linked list
 * @n: number stored in the new node
 * Return: Address of the new node || NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n, *last_n;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}

	last_n = *head;
	while (last_n->next != NULL)
		last_n = last_n->next;

	last_n->next = new_n;

	return (new_n);
}
