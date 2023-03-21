#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - free the memeory
 *
 *@d: pointer to the struct
 *
 *Return: nothing
 */
void free_dog(my_dog *d)
{
	if (d == NULL)
		return;
	
		free(d->owner);
		free(d->name);
		free(d);
}

