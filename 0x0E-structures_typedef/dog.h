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
 */

typedef struct dog my_dog;
int _putchar(char);

#endif
