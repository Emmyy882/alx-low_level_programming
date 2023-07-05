#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - gets nth node of a
 * linked list
 * @head: reference to the linked list
 * @index: index of the node starting at 0
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}
	return (temp ? temp : NULL);
}
