#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - This function creates a new dog.
 * @name: This represents the name of the dog.
 * @age: This represents the age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i, name1, owner2;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (name1 = 0; name[name1]; name1++)
		;

	for (owner2 = 0; owner[owner2]; owner2++)
		;

	p_dog->name = malloc(name1 + 1);
	p_dog->owner = malloc(owner2 + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (i = 0; i < name1; i++)
		p_dog->name[i] = name[i];
	p_dog->name[i] = '\0';

	p_dog->age = age;

	for (i = 0; i < owner2; i++)
		p_dog->owner[i] = owner[i];
	p_dog->owner[i] = '\0';

	return (p_dog);
}
