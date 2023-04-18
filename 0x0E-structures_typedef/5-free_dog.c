#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free a dog
 * @d: dog
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
