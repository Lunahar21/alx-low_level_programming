#include "lists.h"

/**
 *list_len - the number of element in the list_t list
 *@h:parametr with the list
 *
 *Return: the number of nodes
 *
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
