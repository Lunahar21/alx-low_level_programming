#include "lists.h"

/**
 *pop_listint - a function that frees a listint_t list
 *@head: head data
 *
 *Return: interger
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp, *tmp2;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = *head;
	tmp2 = tmp->next;
	n = tmp->n;
	free(*head);
	*head = tmp2;
	return (n);
}
