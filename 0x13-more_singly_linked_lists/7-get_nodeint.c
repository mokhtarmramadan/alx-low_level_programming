#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * @head: linked list pointer
 * @index: node index
 * Return: pinter to the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int n;

	n = 0;
	while (head != NULL && n < index)
	{
		head = head->next;
		n++;
	}

	if (index == n)
	{
		temp = head;
		return (temp);
	}
	else
	{
		return (NULL);
	}
}
