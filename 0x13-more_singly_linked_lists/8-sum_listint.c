#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 * @head: list pointer
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	temp = head;
	if (head == NULL)
	{
		return (0);
	}
	sum = 0;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}


