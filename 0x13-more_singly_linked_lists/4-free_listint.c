#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - that frees a list_t list
 * @head: linked list head pointer
 * Returns: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
