#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: Pointer to the first element of the list
 *
 * Return: Always 0.
 *
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
