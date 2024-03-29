#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the head of the node
 * @str: String
 *
 * Return: The address of the new element, or NULL if it failed
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *new_str = strdup(str);
	list_t *new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		printf("Error! Unable to allocate memory.\n");
		return (NULL);
	}

	new_node->str = new_str;
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	} else
	{
		list_t *current  = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
