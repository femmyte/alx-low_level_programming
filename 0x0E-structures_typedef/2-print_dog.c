#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - ptint a strug dog
 * @d: member
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
