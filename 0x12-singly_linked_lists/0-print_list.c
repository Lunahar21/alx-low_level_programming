#include "lists.h"
/**
 *print_list - a function that prints all the elements of a list_t lis
 *@h: the value of single list
 *
 *Return: numbres of node if str NULL else [0] (nil)
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] (nil)\n", h->len);
		else
			printf("[%u] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
