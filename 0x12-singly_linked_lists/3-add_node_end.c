#include "lists.h"

/**
 *add_node_end - a function that adds a new node at the end of a list_t list
 *@head:parameter that point to the head of the node
 *@str:parameter with string
 *
 *Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	temp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
}
