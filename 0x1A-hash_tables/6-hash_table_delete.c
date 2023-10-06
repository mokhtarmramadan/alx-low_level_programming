#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: a hash_table_t pionts at the table that will be deleted
 * Returns: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *table = ht;
	unsigned long int i;

	for (i = 0; i < table->size; i++)
	{
		if (table->array[i] != NULL)
			free_list(table->array[i]);
	}
	free(table->array);
	free(table);
	ht = NULL;
}


/**
 * free_list - frees a linked list
 * @list: linked list pointer
 * Returns: viod
 */
void free_list(hash_node_t *list)
{
	hash_node_t *temp;
	hash_node_t *head = list;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp->key);
		free(temp->value);
		free(temp);
	}

}
