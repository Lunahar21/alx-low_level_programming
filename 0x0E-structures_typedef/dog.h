#ifndef DOG_H
#define DOG_H

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: where struct dog elements are assign.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of owner of the dog.
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
#endif
