#include "dog.h"

/**
 * init_dog - This function initializes a variable of type struct dog.
 * @d: This is struct dog.
 * @name: This represent the name of the dog.
 * @age: This represents the age of the dog.
 * @owner: owner of the dog.
 *
 * Return: no return.
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
