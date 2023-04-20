#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - returns the sum of all parameters.
 *@...: A varable number of parameters to calculate the sum
 *Return: if n == 0 - 0
 *@n: The number of parameters passed to the function.
 *otherwie - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int l, sum = 0;

	va_start(ap, n);

	for (l = 0; l < n; l++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
