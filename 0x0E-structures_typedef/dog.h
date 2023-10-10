#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - This is Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - This struct stores some information of a dog
 * @name: This the name of the dog
 * @age: this is the age of the dog
 * @owner: This represents the owner of the dog
 *
 * Description: struct called "dog" that stores its name, its age
 * and the name of its owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
