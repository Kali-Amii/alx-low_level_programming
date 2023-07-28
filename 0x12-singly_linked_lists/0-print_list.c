#include "lists.h"
/**
 * print_list -  function that prints all the elements of a list_t list
 * @h: pointer to the list
 *
 * Return: len of list
 */

size_t print_list(const list_t *h)
{
	unsigned long int temp = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0](nil)\n");
		}
		else
		{
			printf("[%d] %s", h->str, h->len);
		}
	temp++;
	h = h->next;
	}

	return (temp);
}
