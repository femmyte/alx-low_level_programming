#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - freeing the created dog
 * @d: member
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	d = malloc(sizeof(dog_t));

	if (d == NULL)
		exit(0);

	free(d);
}
