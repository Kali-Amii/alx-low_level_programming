#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list_t list.
 * @h: a pointer to a list
 *
 * Return: 0
 */
size_t list_len(const list_t *h)
{
	unsigned long int temp = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			return (0);
		}
		else
		{
		count++
		h = h->next
		}
	}
	return (count);
}
