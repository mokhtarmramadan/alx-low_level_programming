#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a pointer to the head pointer
 * @idx: the index we want to insert at
 * @n: data we wanna inset
 * Return: the address of the new node
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	unsigned int count = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (count < idx - 1 && temp->next != NULL)
	{
		count++;
		temp = temp->next;
	}
	if (temp->next == NULL && idx == count + 1)
	{
		return (add_dnodeint_end(h, n));
	}
	else if (temp->next != NULL)
	{
		new->next = temp->next;
		new->prev = temp;
		temp->next = new;
		temp->next->prev = new;
		return (new);
	}
	else
	{
		return (NULL);
	}
}
