#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints variadic strings and a new line
 * @n: no of strings to be printed
 * @separator: string separator (,)
 *
 * Return: return NIL if one string is NULL
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list myString;
	unsigned int i;
	char *str;

	va_start(myString, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(myString, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(myString);
}
