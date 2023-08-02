#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new node at given index. Index start at 0
 * @head: Pointer to the pointer to the start of the list
 * @index: The index position to add the node at
 * @n: The value to assign to the data of the node
 *
 * Return: Address of the new node, or NULL if it fails or a node cannot be
 * added at the given index
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *curr;
	listint_t *tmp;
	unsigned int time;

	if (head == NULL)
		return (NULL);
	curr = *head;
	time = 0;
	if (curr == NULL && index != 0)
		return (NULL);
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	if (index == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (tmp);
	}
	while (time != index - 1)
	{
		curr = curr->next;
		if (curr == NULL)
		{
			free(tmp);
			return (NULL);
		}
		time++;
	}
	tmp->next = curr->next;
	curr->next = tmp;
	return (tmp);
}
