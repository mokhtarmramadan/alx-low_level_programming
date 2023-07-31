#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function sets the head to NULL
 * @head: list pointer
 * Returns: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
