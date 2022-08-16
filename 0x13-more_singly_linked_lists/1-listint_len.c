#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Calculates the length of a linked list
 * @h: Pointer to the head of the linked list
 * Return: The total amount of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
    int i;
    if (h == NULL)
    {
        return (0);
    }
    for(i = 0; h->next != NULL; i++)
    {
        h = h->next;
    }
    return (i);
    
}