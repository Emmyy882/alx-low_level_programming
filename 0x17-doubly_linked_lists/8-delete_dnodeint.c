#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index of a list
 * @head: pointer reference to the head of the list
 * @index: node to be deleted from list
 *
 * Return: 1 if it succeeded or -1 of it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;

	if (!head || !(*head))
		return -1;

	current = *head;

	if (index == 0)
	{
		*head = current->next;

		if (*head)
			(*head)->prev = NULL;

		free(current);
		return 1;
	}

	while (current && index > 0)
	{
		current = current->next;
		index--;
	}

	if (!current)
		return -1;

	if (current->prev)
		current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);
	return 1;
}
