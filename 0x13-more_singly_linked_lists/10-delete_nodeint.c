#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index of a linked list
 * @head: Pointer to a pointer pointing to the first node of the list
 * @index: Index of the node to be deleted (starting from 0)
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *prev;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return (-1);

    current = *head;
    prev = NULL;

    for (i = 0; current != NULL && i < index; i++)
    {
        prev = current;
        current = current->next;
    }

    if (current == NULL)
        return (-1);

    if (prev == NULL)
        *head = current->next;
    else
        prev->next = current->next;

    free(current);
    return (1);
}

