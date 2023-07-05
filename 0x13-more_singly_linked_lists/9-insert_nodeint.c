#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a mew node
 * at a given position
 * @head: reference to listint_t list
 * @idx: index of the list where the new node 
 * shkuld be added
 * @n: the node to be added to the list
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t count = 0;
	listint_t *new_node;
	listint_t *h;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	h = *head;
	while (h != NULL)
	{
		if (idx == count + 1)
		{
			new_node->next = h->next;
			h->next = new_node;
			return (new_node);
		}
		h = h->next;
		count++;
	}
	return (NULL);
}
