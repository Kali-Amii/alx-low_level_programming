#include <stdio.h>
#include "main.h"

/**
 * get_bit - a function that returns value of a bit to an index in decimal num
 * @n: decimal num to be search
 * @index: binary num to be returned
 *
 * Return: a value of a binary num
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int binary_num;

	if (index > 63)
		return (-1);
	binary_num = (n >> index) & 1;
	return (binary_num);
}
