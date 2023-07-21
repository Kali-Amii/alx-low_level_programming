#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints variadic strings and a new line
 * @n: no of strings to be printed
 * @seprator: string seperator (,)
 *
 * Return: return NIL if one string is NULL
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list myString;
	unsigned int i;

	va_start(myString, n);
	
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(myString, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(myString);
}
