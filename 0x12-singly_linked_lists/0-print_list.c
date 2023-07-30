#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

size_t print_list(const list_t *h)
{
	size_t tem;

<<<<<<< HEAD
	tem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		tem++;
	}
=======
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
>>>>>>> b68bda325a6fbc98a03d39fe02138d262809a5cd
	return (tem);
}
