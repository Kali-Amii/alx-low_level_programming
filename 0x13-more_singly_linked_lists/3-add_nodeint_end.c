#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of the list
 * @head: a pointer to a pointer that points to the first node
 * @n: an integer value to the node
 *
 * Return: address to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	current = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	while (current != NULL && current->next != NULL)
		current = current->next;
	if (current != NULL)
		current->next = new;
	else
		*head = new;
	return (new);
}
