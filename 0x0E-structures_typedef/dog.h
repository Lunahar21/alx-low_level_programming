#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *init_dog - initialze a variable of type struct dog
 *@d: pointer to the adress to initialize
 *@name: the dog's name
 *@age: the dog's age
 *@owner: the owner's name
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
