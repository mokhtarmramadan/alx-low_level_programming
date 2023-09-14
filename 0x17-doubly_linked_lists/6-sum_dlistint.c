#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data
 * @head: a head pointer to the list
 * Return: the sum of all the data (n) of a dlistint_t linked list.
 **/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
