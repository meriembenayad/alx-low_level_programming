#include "lists.h"
/**
 * int pop_listint - Function that delete the head node of a listint_t
 * and returns the head node's data (n)
 * @head: pointer to the pointer to the head
 * Return: The head of node's data(n) || 0
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *node;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	node = *head;
	*head = (*head)->next;
	free(node);

	return (data);
}
