#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - function
 * @separator: var
 * @n: var
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *str;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char*);
		if (str != NULL)
			printf("%s", str);
		else
		{
			printf("(nil)");
		}
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(arg);

	putchar('\n');
}
