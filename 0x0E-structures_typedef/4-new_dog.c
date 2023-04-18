#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog - creates a ne dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: a dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int namelen = 0, ownerlen = 0;

	while (name[namelen])
		namelen++;
	while (owner[ownerlen])
		ownerlen++;

	d = malloc(sizeof(*d));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
