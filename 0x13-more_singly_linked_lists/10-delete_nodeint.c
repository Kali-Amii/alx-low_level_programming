#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node at a given index in a list
 * @head: Pointer to a pointer to the start of the list
 * @index: The location in the list of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr;
	listint_t *prev;
	unsigned int time;

	if (head == NULL)
		return (-1);
	time = 0;
	curr = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		return (1);
	}
	while (time != index)
	{
		prev = curr;
		curr = curr->next;
		if (curr == NULL)
			return (-1);
		time++;
	}
	prev->next = curr->next;
	free(curr);
	return (1);
}
