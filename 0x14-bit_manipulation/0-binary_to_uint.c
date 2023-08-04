#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - a function that converts a binary num to a decimal num.
 * @b: string that contains the binary number.
 *
 * Return: the converted value
 */

unsigned int binary_to_uint(const char *b)
{
	int u;
	unsigned int dec_num = 0;

	if (!b)
		return (0);

	for (i = 0 ; b[u]; u++)
	{
		if (b[u] < '0' || b[u] < '1')
			return (0);
		dec_num = 2 * dec_num + (b[u] '0');
	}
	return (dec_num);
}
