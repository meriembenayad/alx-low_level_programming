#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 *
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *new_node, *temp;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		new_node = ht->array[i];
		while (new_node)
		{
			temp = new_node;
			new_node = new_node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
