#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all the variadic variables/arguments
 * @n: no of arguments
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list mysum;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(mysum, n);

	for (i = 0; i < n; i++)
		sum += va_arg(mysum, int);

	va_end(mysum);

	return (sum);

}
