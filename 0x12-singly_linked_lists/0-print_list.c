#include "lists.h"

/**
 * print_list - Print all elements of a list_t list
 * @h: Pointer to the first element of the list
 *
 * Return: Number of elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t tem;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s", h->str, h->len);
		}
	h = h->next;
	temp++;
	}

	return (temp);
	if (h == NULL)
		return (0);
	tem = 1;
	printf("[%d] %s\n", h->len, h->str);
	if (h->next != NULL)
		tem += print_list(h->next);
	return (tem);
}
