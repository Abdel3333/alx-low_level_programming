#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print s variable of type struct dog
 * @d: the struct
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	char *name, *owner;
	float age;

	if (d == NULL)
		;
	else
	{
		name = d->name ? d->name : "(nil)";
		age = d->age ? d->age : 0;
		owner = d->owner ? d->owner : "(nil)";
		printf("Name: %s\nAge: %7f\nOwner: %s\n", name, age, owner);
	}
}
