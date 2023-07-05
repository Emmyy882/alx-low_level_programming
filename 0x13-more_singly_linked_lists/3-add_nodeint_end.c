#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at theend of a list
 * @head: pointer to pointer of list
 * @n: node to be added
 *
 * Return: address of the mew element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	size_t num;
	listint_t *temp;

	num = n;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = num;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		listint_t *current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = temp;
	}
	return (temp);
}
