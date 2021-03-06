#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - check the code for ALX School students.
 * @format: variable
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *sval, cval;
	int i = 0, ival;
	double dval;

	va_start(ap, format);
	/*p = format;*/
	while(format && format[i] && i < 3)
	{
		if(*format != '%')
		{
			putchar(*format);
			continue;
		}
		switch(*format)
		{
		case 'i':
			ival = va_arg(ap, int);
			printf("%d", ival);
			break;
		case 'f':
			dval = va_arg(ap, double);
			printf("%f", dval);
			break;
		case 's':
			sval = va_arg(ap, char *);
			if (sval == NULL)
				printf("(nil)");
			while(*sval)
			{
				putchar(*sval);
				sval++;
			}
			break;
		case 'c':
			cval = va_arg(ap, int);
			printf("%c", cval);
		}
		i++;
		/*format++;*/
	}
	va_end(ap);
	putchar('\n');
}
