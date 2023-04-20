#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - entry
 *@n: int
 *Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list my_list;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(my_list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(my_list, int);
	}
	return (sum);
}
