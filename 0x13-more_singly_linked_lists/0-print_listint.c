#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - Prints the elements of the list_t
 * @h: The list_t list
 * 
 * Return: The amount of nodes in the list
 */


size_t print_listint(const listint_t *h)
{
    size_t node = 0;

    while (h != NULL)
    {
        if (h->n == NULL)
        {
            printf("Error\n");
        }
        else
        {
            printf ("%d elements", h->n);
            node++;
            h = h->next;
        }
        
    }
    return(node);
}