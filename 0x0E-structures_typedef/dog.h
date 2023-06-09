#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new struct
 *
 * @name: name of the dog
 * @age: age
 * @owner: owner of the poppy
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;

} dog;

/**
 * dog_t -new Typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
