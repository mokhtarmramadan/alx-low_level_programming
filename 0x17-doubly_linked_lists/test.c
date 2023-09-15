#include "lists.h"

int print(dlistint_t **head)
{
	int i = 0;
	dlistint_t *temp = *head;

	while (i < 5)
	{
		i++;
		temp = temp->next;
	}
	printf("%d\n", temp->n);
	printf("%d\n", temp->prev->n);
	printf("%d\n", temp->next->n);
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
