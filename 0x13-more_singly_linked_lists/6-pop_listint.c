#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint -  function that deletes the head node of a listint_t
 * @head: a pointer to the list pointer
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	
	temp = *head;
	if(temp->next == NULL)
	{
		n = temp->n;
		free(temp);
		return (n);
	}
	else 
	{
		n = temp->n;
		*head = temp->next;
		free(temp);
		return (n);
	}
}
