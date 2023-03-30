#include "lists.h"
/**
 *free_list - a function that frees a list_t list
 *@head: parametr that point to the head of node
 *
 *Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head  = temp;
	}
}
