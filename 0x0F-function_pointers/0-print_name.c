#include "function_pointers.h"

/**
 * print_name - printing a name
 * @name: var
 * @f :function pointer
 * Return: Notghing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
