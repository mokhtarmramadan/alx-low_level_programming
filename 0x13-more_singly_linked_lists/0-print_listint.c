#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: the linked list structure
 * Return:  the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		if (!h->n)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		i++;
	}
	return (i);
}
