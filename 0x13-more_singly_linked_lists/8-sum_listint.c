#include "lists.h"
/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t
 * @head: pointer to the head of listint_t
 * Return: Sum || 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
