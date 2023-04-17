#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes struct dog
 *
 * @d: pointer to struct dog
 * @name: name of the dog
 * @age: age
 * @owner: owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
