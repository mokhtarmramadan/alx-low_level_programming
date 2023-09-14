#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index index of a dlistint_t linked list
 * @head: a pointer to the head pointer
 * @index: the index we want to delete
 * Return: 1 (success)
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int counter = 0;

	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (counter < index || temp->next != NULL)
	{
		counter++;
		temp = temp->next;
	}
	if (temp->next != NULL)
	{
		(temp->prev)->next = temp->next;
		(temp->next)->prev = temp->prev;
		free(temp);
		return (1);
	}
	else if (counter == index && temp->next == NULL)
	{
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}
	else
	{
		return (-1);
	}
}
