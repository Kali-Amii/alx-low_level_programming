#include "lists.h"

/**
 *print_list - prints all elements of a list_t list.
 *@h: pointer to list
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned long int tmp = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

	tmp++;
	h = h->next;
	}
	return (tmp);
}
