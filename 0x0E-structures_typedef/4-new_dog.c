#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns string lenght
 * @s: string
 *
 * Return: string lenght
 */
int _strlen(char *s)
{
	int p = 0;

	for (; *s != '\0'; s++)
	{
		p++;
	}
	return (p);
}

/**
 * _strcpy - copy a string
 * @dest: copied value
 * @src: source value
 *
 * Return: copied value
 */
char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}

	dest[index++] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char owner)
{
	dog_t  *charlie;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	charlie = malloc(sizeof(charlie));
	if (charlie == NULL)
		return (NULL);

	charlie->name = malloc(sizeof(chr) * (l1 + 1));
	if (charlie->name == NULL)
	{
		free(charlie);
		return (NULL);
	}
	charlie->owner = malloc(sizeof(char) * (l2 + 1));
	if (charlie->owner == NULL)
	{
		free(charlie);
		free(charlie->name);
		return (NULL);
	}
	_strcpy(charlie->name);
	_strcpy(charlie->owner);
	dog->age = age;

	return (charlie);
}
