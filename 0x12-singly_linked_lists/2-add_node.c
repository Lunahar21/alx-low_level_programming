#include "lists.h"

/**
 **add_node - a function that adds a new node at the beginning of a list_t lis
 *@head: parameter with the head node
 *@str: elments havig string in the structure
 *Return: return the head of the linke list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
