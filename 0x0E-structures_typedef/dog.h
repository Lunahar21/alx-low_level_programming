#include "dog.h"
/**
 *init_dog - initialze a variable of type struct dog
 *@: pointer to the adress to initialize
 *@name: the dog's name
 *@age: the dog's age
 *@owner: the owner's name
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
