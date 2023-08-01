#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to the head
 * @idx: node index
 * @n: data
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
        listint_t *new_node;
        listint_t *temp;
        unsigned int i;

        if (head == NULL)
                return (NULL);

        new_node = malloc(sizeof(listint_t));
        if (new_node == NULL)
                return (NULL);

        new_node->n = n;
        temp = *head;

        if (idx == 0)
        {
                new_node->next = temp;
                *head = new_node;
                return (new_node);
        }

        for (i = 0; i < idx - 1; i++)
        {
                if (temp == NULL || temp->next == NULL)
                {
                        free(new_node);
                        return (NULL);
                }
                temp = temp->next;
        }

        new_node->next = temp->next;
        temp->next = new_node;

        return (new_node);
}
