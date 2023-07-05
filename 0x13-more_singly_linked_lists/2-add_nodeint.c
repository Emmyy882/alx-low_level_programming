#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to pointer of list
 * @n: node to be added to list
 *
 * Return: addresd of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	size_t num;
	listint_t *new_node;

	num = n;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = num;
	new_node->next = *head;
	(*head) = new_node;

	return (new_node);
}
