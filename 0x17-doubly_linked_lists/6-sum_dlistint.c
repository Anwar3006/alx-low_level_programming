#include "lists.h"

/**
 * sum_dlistint - Sums all the data of a dlistint_t list.
 * @head: The head of the dlistint_t list.
 *
 * Return: The sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
    dlistint_t *current = head;
    int Result = 0;

    while (current != NULL)
    {
        Result += current->n;
        current = current->next;
    }
    return (Result);
}
