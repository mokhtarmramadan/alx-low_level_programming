#include "lists.h"
#include <stdlib.h>

/**
 * free_list - that frees a list_t list
 * @head: linked list head pointer
 * Returns: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (*head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp->len);
		free(temp->next);
		free(temp);
	}
}
