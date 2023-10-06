#include "hash_tables.h"
#include <stdbool.h>

/**
 * hash_table_print - prints a hash table
 * @ht: a hasht table pointer
 * Returns void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_table_t *table;
	unsigned long int i;
	bool flag = false;

	table = (hash_table_t *)ht;
	if (table == NULL || table->size == 0)
		return;
	printf("{");
	for (i = 0; i < table->size; i++)
	{
		if (table->array[i])
		{
			if (flag)
				printf(", ");

			print_linked_list(table->array[i]);
			flag = true;
		}
	}
	printf("}\n");
}


/**
 * print_linked_list - prints a linked list
 * @head: likedlist's head
 * Returns: void
 */
void print_linked_list(hash_node_t *head)
{
	hash_node_t *temp = head;

	while (temp != NULL)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->next;
		if (temp != NULL)
			printf(", ");
	}

}
