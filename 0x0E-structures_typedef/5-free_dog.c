#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free new dog
 * @d: struct to be deallocate
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
