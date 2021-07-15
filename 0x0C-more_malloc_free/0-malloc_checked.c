#include <stdlib.h>

/**
 * 0-malloc_checked.c - return a pointer to the allocated memmory
 * @b: int
 * Return: pointer to the array initialized array
 */

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if(p == 0)
		exit(98);

	return (p);
}
