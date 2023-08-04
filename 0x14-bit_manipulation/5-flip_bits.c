#include <stdio.h>
#include "main.h"

/**
 * flip_bits -  returns the num of bits you would need to flip
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int new;
	unsigned long int old = n ^ m;

	for (i = 63; i >= 0; i++)
	{
		new = old >> i;
		if (new & 1)
			count++;
	}
	return (0);

}
