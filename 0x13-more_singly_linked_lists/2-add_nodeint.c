#include "lists.h"

/**
 *add_nodeint - a function that adds a new node at the beginning of a listint
 *@n: input integer
 *@head: head parameter at the beginning
 *Return: list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}

}
