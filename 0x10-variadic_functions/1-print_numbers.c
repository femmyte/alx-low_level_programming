#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator:  the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
			printf("%d%c ", va_arg(arg, int), *separator);
	}

	va_end(arg);
}
