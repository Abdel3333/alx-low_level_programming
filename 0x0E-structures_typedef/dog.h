#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog representation
 * @name: a string
 * @age: a float number
 * @owner: a string
 *
 * Description: this struct is for representing a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
