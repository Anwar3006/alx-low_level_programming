#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of the linked list
 * @head: A pointer to the address of the head of listint_t list
 * @n: New integer to be added
 * 
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new, *tail;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        return NULL;
    }
    new->n = n;
    new->next = NULL;

    if (*head == NULL)
    {
        *head = new;
    }

    else
    {
        tail = *head;
        while (tail->next != NULL)
        {
            tail = tail->next; 
        }
        tail->next = new;
    }
    return (*head);
}