#include "lists.h"

/**
 * free_dlistint - Frees a linked dlistint_t list.
 * @head: The head of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
  	dlistint_t *tmp = head;

	if (head)
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
			free(tmp->prev);
		}
    	free(tmp);
    	head = NULL;
}
