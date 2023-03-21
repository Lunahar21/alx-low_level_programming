#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - free the memeory
 *
 *@d: pointer to the struct
 *
 *Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	
		free(d->owner);
		free(d->name);
		free_dog(d);
		return (0);
}

