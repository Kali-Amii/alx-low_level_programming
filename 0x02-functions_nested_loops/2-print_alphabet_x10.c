#include "main.h"

/**
 * print_alphabet_x10- prints 10 times the alphabet, in lowercase.
 *
 * Return: Always 0.
 */

int print_alphabet_x10(void)
{

	int i, n;

	for (i = 0; i < 10; i++)
		{
		for (n = 97; n < 123; n++)
			_putchar(n);

		_putchar('\n');
		}

	return (0);

}
