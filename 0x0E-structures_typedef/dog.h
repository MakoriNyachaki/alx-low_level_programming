#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new struct
 *
 * @name: name of the dog
 * @age: age
 * @owner: owner of the poppy
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};
/**
 * my_dog - new structure for the dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: my_dog
 */

struct dog *my_dog(char *name, float age, char *owner)
{
	struct dog *my_dog;

	my_dog = malloc(sizeof(struct dog));
	if (my_dog == NULL)
		return (NULL);
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}
#endif
