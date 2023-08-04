#include <stdio.h>
#include "main.h"

/**
 * get_endianness - a function that checks the endianness of a machine
 *
 * Return: 0 for big, 1 for small
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c =  (char *) &i;

	return (*c);
}
