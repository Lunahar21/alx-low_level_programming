#include "lists.h"
/**
 *listint_len - a function that returns the number of elements in a linked list
 *@h: head parameter
 *
 *Return: length
 */
size_t listint_len(const listint_t *h)
{
	unsigned int len;

	for (len = 0; h != NULL; len++)
	{
		h = h->next;
	}
	return (len);
}
