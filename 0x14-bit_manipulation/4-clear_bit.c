#include <stdio.h>
#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: a pointer to the num to change
 * @index: the decimal num to be clear
 *
 * Return: 1 if success, 0 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) | *n)
	return (1);
}
