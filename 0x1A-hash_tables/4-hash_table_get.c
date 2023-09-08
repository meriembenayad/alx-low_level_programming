#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: hash table
 * @key: the key of element
 *
 * Return: value || NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *new_node;

	if (!ht || !key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	new_node = ht->array[idx];

	while (new_node)
	{
		if (strcmp(new_node->key, key) == 0)
			return (new_node->value);
		new_node = new_node->next;
	}

	return (NULL);
}
