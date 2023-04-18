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

	d = malloc(sizeof(*d));
	if (d == NULL)
		return (NULL);
	if (name)
		d->name = name;
	if (age)
		d->age = age;
	if (owner)
		d->owner = owner;
	return (d);
}
