#include <lists.h>


/**
 * list_len: Finds the number of elements in the linked list_t list.
 * @h: The linked list_t list.
 *
 * Return: The number of elements is h.
 */

size_t list_len(const list_t *h)
{
	size_t element = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
