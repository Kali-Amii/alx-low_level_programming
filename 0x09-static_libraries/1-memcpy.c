#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: destination of pointer
 * @src: source code of memory area pointer
 * @n: number of bytes
 * Return: return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned char j;

	for (j = 0; j < n; j++)
		*(dest + j) = *(src + j);
	return (dest);
}
