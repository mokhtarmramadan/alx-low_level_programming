#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - adds a new node at the beginning of a list_t list
 * @head: a pointer to the list head
 * @n: an int to be added
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
