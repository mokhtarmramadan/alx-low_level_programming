#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: const unsigned char key
 * @size: unsigned long int hash table size
 * Return: the index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
