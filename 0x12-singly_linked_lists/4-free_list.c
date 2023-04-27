#include "lists.h"
/**
 * free_list - Function free list_t list
 * @head: pointer to the head
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free_list(head->next);
	free(head->str);
	free(head);
}
