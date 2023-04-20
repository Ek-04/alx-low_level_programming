#include "variadic_functions"

/**
 *print_numbers - entry
 *@separator: char
 *@n: int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_list;
	unsigned int l;

	va_start(my_list, n);

	for (l = 0; l < n; l++)
	{
		printf("%d", va_arg(my_list, iny));

		if (l != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(my_list);
}
