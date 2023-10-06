#include "hash_tables.h"


/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash_table_t pointer
 * @key: The key of the item we want to add to the hash table
 * @value: The value of the item we want to add to the hash table
 * Return: 1 when success 0 when failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	const unsigned char *casted_key = (const unsigned char *) key;
	hash_node_t *new_node;
	hash_node_t *current_index;

	/* insertion index is the reminder of the hash divided by the size */
	index = hash_djb2(casted_key) % ht->size;
	current_index = ht->array[index];

	if (current_index == NULL) /* if that index is free */
	{
		new_node = create_hash_node((char *) key, (char *)value);
		if (new_node == NULL)
			return (0);
		current_index = new_node;
		free_node(new_node);
		return (1);
	}
	else if (strcmp(current_index->key, key) == 0)
	{
		current_index->value = malloc(strlen(value) + 1);
		if (current_index->value == NULL)
			return (0);

		strcpy(current_index->value, value);
		return (1);
	}
	else
	{
		if (collision(current_index, (char *) key, (char *)value))
			return (1);
	}
	return (0);
}


/**
 * create_hash_node - creates a new hash_node_t node
 * @key: hash_node_t key
 * @value: hash_node_t value
 * Return: hash_node_t pointer to the new node
 */
hash_node_t *create_hash_node(char *key, char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = malloc(strlen(key) + 1);
	new_node->value = malloc(strlen(value) + 1);
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	new_node->next = NULL;
	return (new_node);
}


/**
 * free_node - frees a  node
 * @new_node: node we wish to free
 * Return: void
 */
void free_node(hash_node_t *new_node)
{
	if (new_node == NULL)
		return;

	free(new_node->key);
	free(new_node->value);
	free(new_node);
}


/**
 * collision -  add the new node at the beginning of the list
 * @current_index: first node in the current list
 * @key: the key of the new node to be added
 * @value: of the new node will be added
 * Return: 0 when fails, 1 when succeed
 */
int collision(hash_node_t *current_index, char *key, char *value)
{
	hash_node_t *head = current_index;
	hash_node_t *new_node;

	if (head != NULL)
	{
		new_node = create_hash_node(key, value);
		if (new_node == NULL)
			return (0);

		new_node->next = current_index;
		head = new_node;
		current_index = head;
		return (1);
	}
	return (0);
}
