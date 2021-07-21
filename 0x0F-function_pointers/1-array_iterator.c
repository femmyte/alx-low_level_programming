#include "function_pointers.h"

/**
 * array_iterator - printing a name
 * @array: variable
 * @size: size of the array
 * @action: function pointer
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
