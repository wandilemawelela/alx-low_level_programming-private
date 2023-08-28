#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the list_t struct
 *
 * Return: Nothing.
 *
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
