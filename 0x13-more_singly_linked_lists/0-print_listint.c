#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h == NULL)
		{
			return (0);
		}
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
