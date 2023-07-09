#include "main.h"
/**
 *  _memset - a function that fills a memory with a constant byte
 *  @s: pointer to the memory area
 *  @b: constant byte
 *  @n: number of bytes to be filled
 *  Return:  return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char d;

	for (d = 0; d < n; d++)
		s[d] = b;
	return (s);
}
