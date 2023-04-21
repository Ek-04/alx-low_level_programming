#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int d = 0;
	char *str, *sep = "";

	va_list list1;

	va_start(list1, format);

	if (format)
	{
		while (format[d])
		{
			switch (format[d])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list1, int));
					break;
				case 'd':
					printf("%s%d", sep, va_arg(list1, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list1, double));
					break;
				case 's':
					str = va_arg(list1, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					d++;
					continue;
			}
			sep = ", ";
			d++;
		}
	}

	printf("\n");
	va_end(list1);
}

