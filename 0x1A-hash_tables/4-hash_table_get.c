#include "hash_tables.h"


/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element, or NULL (not found)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_table_t *table = (hash_table_t *)ht;
	unsigned long int index;
	hash_node_t *current_node;

	if (table == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, (unsigned long int)table->size);
	current_node = table->array[index];
	if (current_node == NULL)
		return (NULL);
	if (strcmp(current_node->key, (char *)key) == 0)
		return (current_node->value);
	while (current_node->next != NULL)
	{
		if (strcmp(current_node->key, (char *)key) == 0)
		{
			return (current_node->value);
		}
		else
		{
			current_node = current_node->next;
		}
	}
	return (NULL);
}
