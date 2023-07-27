#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked
 * @h: node pointer
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
