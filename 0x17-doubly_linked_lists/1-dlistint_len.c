#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
    size_t len = 0;

    while (h)
    {
        if (h->n == NULL)
            printf("Empty list\n");
        else
            h = h->next;
            len++;
    }
    return len;
}