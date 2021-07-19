#include "dog.h"
/**
 * init_dog - initialize  a struct
 * @d: pointer
 * @name: member
 * @age: member
 * @owner: member
 * Return: (0)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
