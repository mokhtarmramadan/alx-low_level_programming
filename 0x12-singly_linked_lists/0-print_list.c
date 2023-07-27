#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @list_t: the linked list structure
 * Return:  the number of nodes
 */

size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			return (0);
		}

		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}

