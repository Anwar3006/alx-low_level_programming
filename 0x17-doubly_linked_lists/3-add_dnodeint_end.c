#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;

    if (*head)
    {
        new_node->n = n;
        new_node->prev = *head;
        (*head)->next = NULL;
        new_node->next = (*head)->next;
        (*head)->next = new_node;
        return (*head);
    }

}
