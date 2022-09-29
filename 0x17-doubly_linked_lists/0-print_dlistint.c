#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
    size_t nodes = 0;

    while (h != NULL)
    {
        if (h->n == NULL)
            printf("Empty list\n");
        else
            printf("%d\n", h->n);
        
        nodes++;
        h = h->next;
    }
    return nodes;
}