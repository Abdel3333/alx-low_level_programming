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
	if (name != NULL && owner != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
		return (d);
	}
	free(d);
	return (NULL);
}
