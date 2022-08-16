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
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}

	return (count);
}