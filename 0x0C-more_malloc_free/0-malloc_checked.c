#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked - a function that allocates memory using malloc
 *
 *@b: is size of memory to be allocated
 *
 *Return: pointer to the allocate memmory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		return (98);
	else
		return (p);
}
