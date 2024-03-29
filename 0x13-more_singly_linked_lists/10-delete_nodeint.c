#include "lists.h"

/**
 *delete_nodeint_at_index - a function that deletes the node
 *at index index of a listint_t linked list.
 *@head: head data
 *@index: ith value to be deleted
 *Return: 1 if succeed else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
	*head = (*head)->next;
	free(temp);
	return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
				temp = temp->next;
		i++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
