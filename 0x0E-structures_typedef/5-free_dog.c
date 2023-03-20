#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - free the dogs
 *@d: pointer to the structs
 *
 *Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
