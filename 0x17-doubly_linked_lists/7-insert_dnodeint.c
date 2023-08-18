#include "lists.h"

/**
 * insert_dnodeint_at_index - inserta a new node at a given position
 * @h: pointer reference to the list
 * @idx: index of list where new node should be inserted
 * @n: new node to be inserted
 *
 * Return: address of new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	if (!h)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;

		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	current = *h;
	while (current && idx > 0)
	{
		current = current->next;
		idx--;
	}

	if (!current && idx > 0)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = current->prev;
	new_node->next = current;
	if (current->prev)
		current->prev->next = new_node;

	current->prev = new_node;
	return (new_node);
}
