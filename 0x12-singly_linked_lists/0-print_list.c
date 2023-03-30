#include "lists.h"
/**
 *print_list - a function that prints all the elements of a list_t lis
 *@h: the value of single list
 *
 *Return: numbres of node if str NULL else [0] (nil)
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (i);
}
