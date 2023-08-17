#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint_t
 * @head: pointer reference to head of the list
 * @index: index of the node starting from 0
 *
 * Return: node at index or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *current = head;

	while (current && index > 0)
	{
		current = current->next;
		index--;
	}

	return (current);
}
