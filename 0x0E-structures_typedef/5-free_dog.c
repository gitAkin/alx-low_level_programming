#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - For us to free the dogs.
 * @d: This is struct dog.
 *
 * Return: no return.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
