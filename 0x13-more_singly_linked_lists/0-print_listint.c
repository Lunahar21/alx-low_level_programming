#include "lists.h"
/**
 *print_listint - a function that prints all the elements of a listint_t list
 *
 *@h: head parameter
 *Return: integer
 */
size_t print_listint(const listint_t *h)
{
	unsigned int  num;

	for (num = 0; h != NULL; num++)
	{
		printf("%d\n", h->n);

		h = h->next;
	}
	return (num);
}
