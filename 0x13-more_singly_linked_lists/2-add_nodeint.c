#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @n: The integer to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *number;

    number = malloc(sizeof(listint_t));
    if (number == NULL)
    {
        return (NULL);
    }

    number->n = n;
    number->next = *head;

    *head = number;

    return (number);  

}